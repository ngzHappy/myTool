
#include <mutex>
#include <shared_mutex>
#include <memory>
#include <tuple>

namespace  cct {
    namespace unique {
        class SharedPointerData {
        public:
            mutable std::recursive_mutex mutex;
            bool onDestory=false;
            class Undefine {};
        };

        class SharedPointerDataPointer :
            public std::shared_ptr<SharedPointerData> {
            typedef std::shared_ptr<SharedPointerData> Super;
        public:
            explicit SharedPointerDataPointer(SharedPointerData::Undefine) {}
            SharedPointerDataPointer() :Super(new SharedPointerData) {}
            SharedPointerDataPointer(const SharedPointerDataPointer & v) :Super(v) {}
            SharedPointerDataPointer(SharedPointerDataPointer && v) :Super(std::move(v)) {}
            void destory() {
                std::unique_lock< std::recursive_mutex > locker_(this->get()->mutex);
                this->get()->onDestory=true;
            }
            auto isDestory()const ->std::tuple< bool, std::unique_lock<std::recursive_mutex> > {
                std::tuple< bool, std::unique_lock<std::recursive_mutex> > ans{
                    this->get()->onDestory,std::unique_lock< std::recursive_mutex >(this->get()->mutex)
                };
                return std::move(ans);
            }
        };

        template<typename T>
        class SharedPointer {
            mutable SharedPointerDataPointer data_;
            T * pointer_;
        public:
            typedef T value_type;
            typedef T * value_pointer;
            SharedPointer() :data_(SharedPointerData::Undefine{}), pointer_(nullptr) {}
            SharedPointer(T * p, SharedPointerDataPointer d) :data_(d), pointer_(p) {}
            auto pointer() const->std::tuple< T *, std::unique_lock<std::recursive_mutex> > {
                const auto data__=data_;/*make a copy of data*/
                typedef std::tuple< T *, std::unique_lock<std::recursive_mutex> > AnsType;
                if (bool(data_)==false) { return AnsType{ nullptr,std::unique_lock<std::recursive_mutex>() }; }
                auto isDestory_=data_.isDestory();
                if (std::get<0>(isDestory_)) {
                    data_.reset();/*give up data*/
                    return AnsType{ nullptr,std::unique_lock<std::recursive_mutex>() };
                }
                return AnsType(pointer_, std::move(std::get<1>(isDestory_)));
            }
            void reset()const { data_.reset(); }
        };

        template<typename T>
        SharedPointer<T> make_shared_pointer(T * base) {
            return SharedPointer<T>(base, base->shared_pointer_data_pointer);
        }

        template<typename T>auto & first(T & d) { return std::get<0>(d); }
        template<typename T>auto & second(T & d) { return std::get<1>(d); }
        template<typename T>auto & third(T & d) { return std::get<2>(d); }

        template<typename T>
        T * pointer(std::tuple< T *, std::unique_lock<std::recursive_mutex> > & d) {
            return std::get<0>(d);
        }

        template<typename T>
        auto & locker(std::tuple< T *, std::unique_lock<std::recursive_mutex> > & d) {
            return std::get<1>(d);
        }

#define SHARED_POINTER_CLASS public: cct::SharedPointerDataPointer shared_pointer_data_pointer /**/
#define SHARED_POINTER_CLASS_DESTORY this->shared_pointer_data_pointer.destory()/**/
    }
}

namespace cct {
    namespace shared {
        class SharedPointerData {
        public:
            mutable std::shared_timed_mutex mutex;
            bool onDestory=false;
            class Undefine {};
        };

        class SharedPointerDataPointer :
            public std::shared_ptr<SharedPointerData> {
            typedef std::shared_ptr<SharedPointerData> Super;
        public:
            explicit SharedPointerDataPointer(SharedPointerData::Undefine) {}
            SharedPointerDataPointer() :Super(new SharedPointerData) {}
            SharedPointerDataPointer(const SharedPointerDataPointer & v) :Super(v) {}
            SharedPointerDataPointer(SharedPointerDataPointer && v) :Super(std::move(v)) {}
            void destory() {
                std::unique_lock< std::shared_timed_mutex > locker_(this->get()->mutex);/*write*/
                this->get()->onDestory=true;
            }
            auto isDestory()const ->std::tuple< bool, std::shared_lock<std::shared_timed_mutex> > {
                typedef std::tuple< bool, std::shared_lock<std::shared_timed_mutex> > AnsType;
                AnsType ans{
                    this->get()->onDestory,
                    std::shared_lock<std::shared_timed_mutex>(this->get()->mutex)/*read*/
                };
                return std::move(ans);
            }
        };

        template<typename T>
        class SharedPointer {
            mutable SharedPointerDataPointer data_;
            T * pointer_;
        public:
            typedef T value_type;
            typedef T * value_pointer;
            SharedPointer() :data_(SharedPointerData::Undefine{}), pointer_(nullptr) {}
            SharedPointer(T * p, SharedPointerDataPointer d) :data_(d), pointer_(p) {}
            auto pointer() const->std::tuple< T *, std::shared_lock<std::shared_timed_mutex> > {
                const auto data__=data_;/*make a copy of data*/
                typedef std::shared_lock<std::shared_timed_mutex> SharedLockType;
                typedef std::tuple< T *, SharedLockType > AnsType;
                if (bool(data_)==false) { return AnsType{ nullptr,SharedLockType{} }; }
                auto isDestory_=data_.isDestory();
                if (std::get<0>(isDestory_)) {
                    data_.reset();/*give up data*/
                    return AnsType{ nullptr,SharedLockType{} };
                }
                return AnsType(pointer_, std::move(std::get<1>(isDestory_)));
            }
            void reset()const { data_.reset(); }
        };

        template<typename T>
        SharedPointer<T> make_shared_pointer(T * base) {
            return SharedPointer<T>(base, base->shared_pointer_data_pointer);
        }

        template<typename T>auto & first(T & d) { return std::get<0>(d); }
        template<typename T>auto & second(T & d) { return std::get<1>(d); }
        template<typename T>auto & third(T & d) { return std::get<2>(d); }

        template<typename T  >
        T * pointer(std::tuple< T *, std::shared_lock<std::shared_timed_mutex> > & d) {
            return std::get<0>(d);
        }

        template<typename T >
        auto & locker(std::tuple< T *, std::shared_lock<std::shared_timed_mutex> > & d) {
            return std::get<1>(d);
        }

#if !defined(SHARED_POINTER_READER_CLASS)
#define SHARED_POINTER_READER_CLASS public: cct::shared::SharedPointerDataPointer shared_pointer_data_pointer /**/
#endif
#if !defined(SHARED_POINTER_CLASS_DESTORY)
#define SHARED_POINTER_CLASS_DESTORY this->shared_pointer_data_pointer.destory()/**/
#endif
    }

}

class X {
    SHARED_POINTER_READER_CLASS;

public:
    X() {}
    ~X() {
        SHARED_POINTER_CLASS_DESTORY;
    }
};

int main() {
    using namespace cct::shared;
    X x;
    auto sharedX = cct::shared::make_shared_pointer(&x);
    SharedPointer<int> sdf;
    sdf.pointer();
    {
        auto x1=sharedX.pointer();
        auto y1=sharedX.pointer();
        if ( pointer(x1) ) {  }
    }



}
