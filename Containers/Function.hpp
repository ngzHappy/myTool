#if !defined( FUNCTION_HPP__CCT__ )
#define FUNCTION_HPP__CCT__ 1

#include <memory>
#include <type_traits>
#include <functional>

namespace cct {
namespace spr {

template< typename _base_some_class_ >
class Function :
    public std::shared_ptr< _base_some_class_ > {
private:
    typedef std::shared_ptr< _base_some_class_ > __Super;
    typedef std::shared_ptr< std::add_const_t<_base_some_class_> > _const_Super;
    typedef typename __Super::element_type __element_type;
    static auto _this_delete_this_() { return [](__element_type * v) {delete v; }; }
    __element_type & _this_get() { return *(this->get()); }
    std::add_const_t<__element_type> & _this_const_get() const { return *(this->get()); }
public:
    typedef __element_type element_type;
    Function():__Super(new element_type,_this_delete_this_()) {}
    Function(decltype(nullptr)) {}

    template<typename _U,typename _EXPLICIT=decltype(static_cast<element_type *>(reinterpret_cast<std::remove_reference_t<_U> *>(0))) >
    Function(_U* value):__Super(static_cast<element_type *>(value),_this_delete_this_()) {}

    Function(const __Super & s):__Super(s) {}
    Function(__Super && s):__Super(std::move(s)) {}
    Function(__Super & s):__Super(s) {}

    template<typename _U>Function(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Function(std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Function(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>Function(const std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>Function(std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>Function(std::weak_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>Function(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Function(std::unique_ptr<_U> &u)=delete;
    template<typename _U>Function(const std::unique_ptr<_U> &u)=delete;

    template<typename _U>Function(const std::shared_ptr<_U>& x,element_type* p):__Super(x,p) {}

    template<typename A0,typename A1,typename ... Args>
    Function(A0 && a0,A1 && a1,Args && ... args):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1),std::forward<Args>(args)...),_this_delete_this_()) {}
    template<typename A0,typename _EXPLICIT=std::enable_if_t< !(std::is_constructible<__Super,A0 &&>::value) >,typename _EMORE=void>
    Function(A0 && a0):__Super(new element_type(std::forward<A0>(a0)),_this_delete_this_()) {}

    template<typename _U,typename _EXPLICIT=std::enable_if_t< (std::is_constructible<element_type,const std::initializer_list<_U> & >::value) > >
    Function(const std::initializer_list<_U> & v):__Super(new element_type(v),_this_delete_this_()) {}
    Function< std::add_const_t<_base_some_class_> > toConst()const { return static_cast<const _const_Super &>(*this); }

    Function(const std::remove_const_t<element_type> & v):__Super(new element_type(v),_this_delete_this_()) {}
    Function(std::remove_const_t<element_type> && v):__Super(new element_type(std::move(v)),_this_delete_this_()) {}
    Function(std::remove_const_t<element_type> & v):__Super(new element_type(v),_this_delete_this_()) {}
    Function< std::remove_const_t<_base_some_class_> > clone()const { return Function< std::remove_const_t<_base_some_class_> >(*(*this)); }

    std::weak_ptr<_base_some_class_> toWeakPointer() const { return *this; }

    ~Function()=default;
    Function(const Function&)=default;
    Function(Function&&)=default;
    template<typename _U>Function(Function<_U>&&v):__Super(std::move(v)) {}
    template<typename _U>Function(const Function<_U>&v):__Super(v) {}
    template<typename _U>Function(Function<_U>&v):__Super(v) {}
    Function&operator=(const Function&)=default;
    Function&operator=(Function&&)=default;

    template<typename ... Args>
    decltype(auto) operator()(Args && ... args)const { return _this_const_get()(std::forward<Args>(args)...); }

    template<typename ... Args>
    decltype(auto) operator()(Args && ... args) { return _this_get()(std::forward<Args>(args)...); }

    operator bool() const { if (this->get()) { return bool(_this_const_get()); } return false; }

};

}/*spr*/

template<typename _T>
using Function=spr::Function< std::function<_T> >;

}/*cct*/


#endif // FUNCTION_HPP


