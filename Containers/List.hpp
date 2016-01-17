
#if !defined(LIST__HPP__CCT)
#define LIST__HPP__CCT

#include <list>
#include <memory>
#include <type_traits>

namespace cct{

namespace base {
template<typename T>
class List:public std::list<T> {
    typedef std::list<T> _Super;
public:
    using _Super::_Super;
    List()=default;
    List(const List &)=default;
    List(const _Super &v):_Super(v) {}
    List(_Super &&v):_Super(std::move(v)) {}
    List&operator=(List &&)=default;
    List&operator=(const List &)=default;
    static void deleteThis(List * v) { delete v; }
};
}

template<typename _0_T>
class List :
    public std::shared_ptr< cct::base::List<_0_T> >{
private:
    typedef std::shared_ptr< cct::base::List<_0_T> > __Super;
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
    auto cbegin() { return _get()->cbegin(); }
    auto cend() { return _get()->cend(); }
    auto rbegin() { return _get()->rbegin(); }
    auto rend() { return _get()->rend(); }
    auto crbegin() { return _get()->crbegin(); }
    auto crend() { return _get()->crend(); }

    List():__Super(new element_type,&element_type::deleteThis){}
    List(decltype(nullptr)) {}
    template<typename _U,typename _EXPLICIT= decltype( static_cast<element_type *>( reinterpret_cast< std::remove_reference_t<_U> *>(0) ) ) >
    List(_U* value):__Super(static_cast<element_type * >(value) ,&element_type::deleteThis) {}
    List(const __Super & s):__Super(s) {}
    template<typename _U>List(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>List(const std::weak_ptr<_U> &u):__Super(u) {}
    List(__Super && s):__Super(std::move(s)) {}
    template<typename _U>List(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>List(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>List(const std::shared_ptr<_U>& x,element_type* p) :__Super(x,p){}
    template<typename A0,typename A1, typename ... Args>
    List(A0 && a0,A1 && a1, Args && ... args ):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1), std::forward<Args>(args)... ),&element_type::deleteThis){}
    template<typename A0,typename _EXPLICIT=decltype( new element_type( std::declval<A0>() ) ) ,typename _EMORE=void>
    List(A0 && a0 ):__Super(new element_type( std::move(a0) ),&element_type::deleteThis ) {}
    template<typename A0,typename _EXPLICIT=decltype( new element_type( *(reinterpret_cast<std::remove_reference_t<A0> *>(0)) ) )>
    List(A0 & a0 ):__Super(new element_type( a0 ),&element_type::deleteThis ) {}
    template<typename _U>
    List(const std::initializer_list<_U> & v):__Super(new element_type(v),&element_type::deleteThis) {}

    ~List()=default;
    List(const List&)=default;
    List(List&&)=default;
    List&operator=(const List&)=default;
    List&operator=(List&&)=default;

    class WriteCopy;
    const WriteCopy & copy() const { return reinterpret_cast<WriteCopy &>(const_cast<List &>(*this));  }

};

template< typename _1_T >
class List<_1_T>::WriteCopy:
    public List{
public:
    using List::List;
    WriteCopy(const List & v):List(v) {}
    WriteCopy(List && v):List(std::move(v)) {}
    WriteCopy()=default;
    WriteCopy(const WriteCopy &)=default;
    WriteCopy(WriteCopy &&)=default;
    WriteCopy&operator=(const WriteCopy &)=default;
    WriteCopy&operator=(WriteCopy &&)=default;
    std::add_const_t<element_type> * operator->()const {
        static_assert(sizeof(List)==sizeof(WriteCopy),"you can not add any data");
        return List::operator->();
    }
    element_type * operator->() {
        if(*this){if (this->unique()==false) {*this = List( new element_type( *(*this) ) );}}
        return List::operator->();
    }
    std::add_const_t<element_type> * get()const { return this->operator->(); }
    element_type * get(){ return this->operator->(); }
    const WriteCopy & copy() const { return *this; }

    auto begin() { return get()->begin(); }
    auto end() { return get()->end(); }
    auto cbegin() { return get()->cbegin(); }
    auto cend() { return get()->cend(); }
    auto rbegin() { return get()->rbegin(); }
    auto rend() { return get()->rend(); }
    auto crbegin() { return get()->crbegin(); }
    auto crend() { return get()->crend(); }

};


}

#endif



