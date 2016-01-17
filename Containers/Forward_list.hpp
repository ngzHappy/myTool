
#if !defined(FORWARD_LIST__HPP__CCT)
#define FORWARD_LIST__HPP__CCT

#include <forward_list>
#include <memory>
#include <type_traits>

namespace cct{

namespace base {
template<typename T>
class Forward_list:public std::forward_list<T> {
    typedef std::forward_list<T> _Super;
public:
    using _Super::_Super;
    Forward_list()=default;
    Forward_list(const Forward_list &)=default;
    Forward_list(Forward_list &&)=default;
    Forward_list(const _Super &v):_Super(v) {}
    Forward_list(_Super &&v):_Super(std::move(v)) {}
    Forward_list&operator=(Forward_list &&)=default;
    Forward_list&operator=(const Forward_list &)=default;
    static void deleteThis(Forward_list * v) { delete v; }
};
}

template<typename _9_T>
class Forward_list :
    public std::shared_ptr< cct::base::Forward_list<_9_T> >{
private:
    typedef std::shared_ptr< cct::base::Forward_list<_9_T> > __Super;
    typedef typename __Super::element_type element_type;
    const element_type * _get_const()const { return this->get(); }
    element_type * _get() { return this->get(); }
public:
    typedef typename element_type::value_type value_type;
    typedef typename element_type::const_iterator const_iterator;
    typedef typename element_type::size_type size_type;

    auto begin()const { return _get_const()->begin(); }
    auto end() const { return _get_const()->end(); }
    auto cbegin()const { return _get_const()->cbegin(); }
    auto cend() const { return _get_const()->cend(); }

    auto begin() { return _get()->begin(); }
    auto end() { return _get()->end(); }

    Forward_list():__Super(new element_type,&element_type::deleteThis){}
    Forward_list(decltype(nullptr)) {}
    template<typename _U,typename _EXPLICIT= decltype( static_cast<element_type *>( reinterpret_cast< std::remove_reference_t<_U> *>(0) ) ) >
    Forward_list(_U* value):__Super(static_cast<element_type * >(value) ,&element_type::deleteThis) {}
    Forward_list(const __Super & s):__Super(s) {}
    template<typename _U>Forward_list(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Forward_list(const std::weak_ptr<_U> &u):__Super(u) {}
    Forward_list(__Super && s):__Super(std::move(s)) {}
    template<typename _U>Forward_list(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Forward_list(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Forward_list(const std::shared_ptr<_U>& x,element_type* p) :__Super(x,p){}
    template<typename A0,typename A1, typename ... Args>
    Forward_list(A0 && a0,A1 && a1, Args && ... args ):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1), std::forward<Args>(args)... ),&element_type::deleteThis){}
    template<typename A0,typename _EXPLICIT=decltype( new element_type( std::declval<A0>() ) ) ,typename _EMORE=void>
    Forward_list(A0 && a0 ):__Super(new element_type( std::move(a0) ),&element_type::deleteThis ) {}
    template<typename A0,typename _EXPLICIT=decltype( new element_type( *(reinterpret_cast<std::remove_reference_t<A0> *>(0)) ) )>
    Forward_list(A0 & a0 ):__Super(new element_type( a0 ),&element_type::deleteThis ) {}
    template<typename _U>
    Forward_list(const std::initializer_list<_U> & v):__Super(new element_type(v),&element_type::deleteThis) {}

    ~Forward_list()=default;
    Forward_list(const Forward_list&)=default;
    Forward_list(Forward_list&&)=default;
    Forward_list&operator=(const Forward_list&)=default;
    Forward_list&operator=(Forward_list&&)=default;

    class WriteCopy;
    const WriteCopy & copy() const { return reinterpret_cast<WriteCopy &>(const_cast<Forward_list &>(*this));  }

};

template<typename _0_T>
class Forward_list<_0_T>::WriteCopy:
    public Forward_list{
public:
    using Forward_list::Forward_list;
    WriteCopy(const Forward_list & v):Forward_list(v) {}
    WriteCopy(Forward_list && v):Forward_list(std::move(v)) {}
    WriteCopy()=default;
    WriteCopy(const WriteCopy &)=default;
    WriteCopy(WriteCopy &&)=default;
    WriteCopy&operator=(const WriteCopy &)=default;
    WriteCopy&operator=(WriteCopy &&)=default;
    std::add_const_t<element_type> * operator->()const {
        static_assert(sizeof(Forward_list)==sizeof(WriteCopy),"you can not add any data");
        return Forward_list::operator->();
    }
    element_type * operator->() {
        if(*this){if (this->unique()==false) {*this = Forward_list( new element_type( *(*this) ) );}}
        return Forward_list::operator->();
    }
    std::add_const_t<element_type> * get()const { return this->operator->(); }
    element_type * get(){ return this->operator->(); }
    const WriteCopy & copy() const { return *this; }

    auto begin() { return get()->begin(); }
    auto end() { return get()->end(); }
    auto cbegin()const { return get()->cbegin(); }
    auto cend()const { return get()->cend(); }

};


}

#endif



