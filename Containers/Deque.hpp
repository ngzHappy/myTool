
#if !defined(DEQUE__HPP__CCT)
#define DEQUE__HPP__CCT

#include <deque>
#include <memory>
#include <type_traits>

namespace cct {

namespace base {
template<typename T>
class Deque :public std::deque<T> {
    typedef std::deque<T> _Super;
public:
    using _Super::_Super;
    Deque()=default;
    Deque(const Deque &)=default;
    Deque(Deque &&)=default;
    Deque(const _Super &v):_Super(v) {}
    Deque(_Super &&v):_Super(std::move(v)) {}
    Deque&operator=(Deque &&)=default;
    Deque&operator=(const Deque &)=default;
    static void deleteThis(Deque * v) { delete v; }
};
}

template<typename _0_T>
class Deque :
    public std::shared_ptr< cct::base::Deque<_0_T> > {
private:
    typedef std::shared_ptr< cct::base::Deque<_0_T> > __Super;
    typedef typename __Super::element_type element_type;
    const element_type * _get_const()const { return this->get(); }
    element_type * _get() { return this->get(); }

public:
    typedef typename element_type::value_type value_type;
    typedef typename element_type::const_iterator const_iterator;
    typedef typename element_type::size_type size_type;
    size_type size() const { return _get_const()->size(); }
    size_type length()const { return size(); }

    auto begin()const { return _get_const()->begin(); }
    auto end() const { return _get_const()->end(); }
    auto cbegin()const { return _get_const()->cbegin(); }
    auto cend() const { return _get_const()->cend(); }
    auto rbegin()const { return _get_const()->rbegin(); }
    auto rend() const { return _get_const()->rend(); }
    auto crbegin()const { return _get_const()->crbegin(); }
    auto crend() const { return _get_const()->crend(); }

    auto begin() { return _get()->begin(); }
    auto end() { return _get()->end(); }
    auto rbegin() { return _get()->rbegin(); }
    auto rend() { return _get()->rend(); }

    Deque():__Super(new element_type,&element_type::deleteThis) {}
    Deque(decltype(nullptr)) {}
    template<typename _U,typename _EXPLICIT=decltype(static_cast<element_type *>(reinterpret_cast<std::remove_reference_t<_U> *>(0))) >
    Deque(_U* value):__Super(static_cast<element_type *>(value),&element_type::deleteThis) {}
    Deque(const __Super & s):__Super(s) {}
    template<typename _U>Deque(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Deque(const std::weak_ptr<_U> &u):__Super(u) {}
    Deque(__Super && s):__Super(std::move(s)) {}
    template<typename _U>Deque(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Deque(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Deque(const std::shared_ptr<_U>& x,element_type* p):__Super(x,p) {}
    template<typename A0,typename A1,typename ... Args>
    Deque(A0 && a0,A1 && a1,Args && ... args):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1),std::forward<Args>(args)...),&element_type::deleteThis) {}
    template<typename A0,typename _EXPLICIT=decltype(new element_type(std::declval<A0>())),typename _EMORE=void>
    Deque(A0 && a0):__Super(new element_type(std::move(a0)),&element_type::deleteThis) {}
    template<typename A0,typename _EXPLICIT=decltype(new element_type(*(reinterpret_cast<std::remove_reference_t<A0> *>(0))))>
    Deque(A0 & a0):__Super(new element_type(a0),&element_type::deleteThis) {}
    template<typename _U>
    Deque(const std::initializer_list<_U> & v):__Super(new element_type(v),&element_type::deleteThis) {}

    ~Deque()=default;
    Deque(const Deque&)=default;
    Deque(Deque&&)=default;
    Deque&operator=(const Deque&)=default;
    Deque&operator=(Deque&&)=default;

    class WriteCopy;
    const WriteCopy & copy() const { return reinterpret_cast<WriteCopy &>(const_cast<Deque &>(*this)); }

};

template<typename _0_T>
class Deque<_0_T>::WriteCopy :
    public Deque {
public:
    using Deque::Deque;
    WriteCopy(const Deque & v):Deque(v) {}
    WriteCopy(Deque && v):Deque(std::move(v)) {}
    WriteCopy()=default;
    WriteCopy(const WriteCopy &)=default;
    WriteCopy(WriteCopy &&)=default;
    WriteCopy&operator=(const WriteCopy &)=default;
    WriteCopy&operator=(WriteCopy &&)=default;
    std::add_const_t<element_type> * operator->()const {
        static_assert(sizeof(Deque)==sizeof(WriteCopy),"you can not add any data");
        return Deque::operator->();
    }
    element_type * operator->() {
        if (*this) { if (this->unique()==false) { *this=Deque(new element_type(*(*this))); } }
        return Deque::operator->();
    }
    std::add_const_t<element_type> * get()const { return this->operator->(); }
    element_type * get() { return this->operator->(); }
    const WriteCopy & copy() const { return *this; }

    auto begin() { return get()->begin(); }
    auto end() { return get()->end(); }
    auto cbegin()const { return get()->cbegin(); }
    auto cend()const { return get()->cend(); }
    auto rbegin() { return get()->rbegin(); }
    auto rend() { return get()->rend(); }
    auto crbegin()const { return get()->crbegin(); }
    auto crend()const { return get()->crend(); }

};

}

#endif



