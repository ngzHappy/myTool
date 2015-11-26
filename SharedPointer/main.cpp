#include <mutex>
#include <memory>
#include <tuple>

namespace  cct{

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
            const auto data__ = data_;/*make a copy of data*/
            typedef std::tuple< T *, std::unique_lock<std::recursive_mutex> > AnsType;
            if (bool(data_)==false) {return AnsType{ nullptr,std::unique_lock<std::recursive_mutex>() };}
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

#include <iostream>
int main(int argc, char *argv[])
{
    using namespace std;
    cout << "Hello World!" << endl;
    return 0;
}
