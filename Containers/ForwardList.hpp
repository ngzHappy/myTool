
#if !defined(FORWARD_LIST__HPP__CCT)
#define FORWARD_LIST__HPP__CCT 1

#include <forward_list>
#include <memory>
#include <type_traits>

namespace cct{
namespace spr {

template< typename _base_some_class_ >
class ForwardList :
    public std::shared_ptr< _base_some_class_ >{
private:
    typedef std::shared_ptr< _base_some_class_ > __Super;
    typedef std::shared_ptr< std::add_const_t<_base_some_class_> > _const_Super;
    typedef typename __Super::element_type __element_type;
    static auto _this_delete_this_() { return [](__element_type * v) {delete v; }; }
    __element_type & _this_get() { return *(this->get()); }
    std::add_const_t<__element_type> & _this_const_get() const { return *(this->get()); }
public:
    typedef __element_type element_type;
    ForwardList():__Super(new element_type,_this_delete_this_()){}
    ForwardList(decltype(nullptr)) {}

    template<typename _U,typename _EXPLICIT= decltype( static_cast<element_type *>( reinterpret_cast< std::remove_reference_t<_U> *>(0) ) ) >
    ForwardList(_U* value):__Super(static_cast<element_type * >(value) ,_this_delete_this_()) {}

    ForwardList(const __Super & s):__Super(s) {}
    ForwardList(__Super && s):__Super(std::move(s)) {}
    ForwardList(__Super & s):__Super(s) {}

    template<typename _U>ForwardList(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>ForwardList(std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>ForwardList(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>ForwardList(const std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>ForwardList(std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>ForwardList(std::weak_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>ForwardList(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>ForwardList(std::unique_ptr<_U> &u)=delete;
    template<typename _U>ForwardList(const std::unique_ptr<_U> &u)=delete;

    template<typename _U>ForwardList(const std::shared_ptr<_U>& x,element_type* p) :__Super(x,p){}

    template<typename A0,typename A1, typename ... Args>
    ForwardList(A0 && a0,A1 && a1, Args && ... args ):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1), std::forward<Args>(args)... ),_this_delete_this_()){}
    template<typename A0,typename _EXPLICIT=std::enable_if_t< !(std::is_constructible<__Super,A0 &&>::value) > ,typename _EMORE=void>
    ForwardList(A0 && a0 ):__Super(new element_type( std::forward<A0>(a0) ),_this_delete_this_() ) {}

    template<typename _U,typename _EXPLICIT= std::enable_if_t< (std::is_constructible<element_type,const std::initializer_list<_U> & >::value) > >
    ForwardList(const std::initializer_list<_U> & v):__Super(new element_type(v),_this_delete_this_()) {}
    ForwardList< std::add_const_t<_base_some_class_> > toConst()const { return static_cast<const _const_Super &>(*this); }

    ForwardList( const std::remove_const_t<element_type> & v ):__Super(new element_type(v),_this_delete_this_()) {}
    ForwardList( std::remove_const_t<element_type> && v ):__Super(new element_type( std::move(v) ),_this_delete_this_()) {}
    ForwardList( std::remove_const_t<element_type> & v ):__Super(new element_type(v),_this_delete_this_()) {}
    ForwardList< std::remove_const_t<_base_some_class_> > clone()const { return ForwardList< std::remove_const_t<_base_some_class_> >(*(*this)); }

    std::weak_ptr<_base_some_class_> toWeakPointer() const { return *this; }

    ~ForwardList()=default;
    ForwardList(const ForwardList&)=default;
    ForwardList(ForwardList&&)=default;
    template<typename _U>ForwardList(ForwardList<_U>&&v):__Super( std::move(v) ) {}
    template<typename _U>ForwardList(const ForwardList<_U>&v):__Super( v ) {}
    template<typename _U>ForwardList(ForwardList<_U>&v):__Super( v ) {}
    ForwardList&operator=(const ForwardList&)=default;
    ForwardList&operator=(ForwardList&&)=default;

    typedef typename element_type::value_type value_type;
    typedef typename element_type::const_iterator const_iterator;
    typedef typename element_type::size_type size_type;

    auto begin()const { return _this_const_get().begin(); }
    auto end() const { return _this_const_get().end(); }
    auto cbegin()const { return _this_const_get().cbegin(); }
    auto cend() const { return _this_const_get().cend(); }

    auto begin() { return _this_get().begin(); }
    auto end() { return _this_get().end(); }

};
}/*spr*/

template<typename _T>
using ForwardList=spr::ForwardList< std::forward_list<_T> >;
template<typename _T>
using ConstForwardList=spr::ForwardList<const std::forward_list<_T> >;

}/*cct*/

#endif



