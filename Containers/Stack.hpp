
#if !defined(STACK__HPP__CCT)
#define STACK__HPP__CCT 1

#include <vector>
#include <stack>
#include <memory>
#include <type_traits>
#include <utility>

namespace cct {

namespace spr {
template< typename _base_some_class_ >
class Stack :
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
    Stack():__Super(new element_type,_this_delete_this_()) {}
    Stack(decltype(nullptr)) {}

    template<typename _U,typename _EXPLICIT=decltype(static_cast<element_type *>(reinterpret_cast<std::remove_reference_t<_U> *>(0))) >
    Stack(_U* value):__Super(static_cast<element_type *>(value),_this_delete_this_()) {}

    Stack(const __Super & s):__Super(s) {}
    Stack(__Super && s):__Super(std::move(s)) {}
    Stack(__Super & s):__Super(s) {}

    template<typename _U>Stack(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Stack(std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Stack(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>Stack(const std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>Stack(std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>Stack(std::weak_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename ..._U>Stack(std::unique_ptr<_U...> &&u):__Super(std::move(u)) {}
    template<typename ..._U>Stack(std::unique_ptr<_U...> &u)=delete;
    template<typename ..._U>Stack(const std::unique_ptr<_U...> &u)=delete;

    template<typename _U>Stack(const std::shared_ptr<_U>& x,element_type* p):__Super(x,p) {}

    template<typename A0,typename A1,typename ... Args,typename _EXPLICIT=std::enable_if_t<!(std::is_constructible<__Super,A0 &&,A1&&,Args && ...>::value)> >
    Stack(A0 && a0,A1 && a1,Args && ... args):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1),std::forward<Args>(args)...),_this_delete_this_()) {}
    template<typename A0,typename _EXPLICIT=std::enable_if_t< !(std::is_constructible<__Super,A0 &&>::value) >,typename _EMORE=void>
    Stack(A0 && a0):__Super(new element_type(std::forward<A0>(a0)),_this_delete_this_()) {}

    template<typename _U,typename _EXPLICIT=std::enable_if_t< (std::is_constructible<element_type,const std::initializer_list<_U> & >::value) > >
    Stack(const std::initializer_list<_U> & v):__Super(new element_type(v),_this_delete_this_()) {}
    const Stack< std::add_const_t<_base_some_class_> > & toConst()const { return reinterpret_cast<const Stack< std::add_const_t<_base_some_class_> > &>(*this); }

    Stack(const std::remove_const_t<element_type> & v):__Super(new element_type(v),_this_delete_this_()) {}
    Stack(std::remove_const_t<element_type> && v):__Super(new element_type(std::move(v)),_this_delete_this_()) {}
    Stack(std::remove_const_t<element_type> & v):__Super(new element_type(v),_this_delete_this_()) {}
    Stack< std::remove_const_t<_base_some_class_> > clone()const { return Stack< std::remove_const_t<_base_some_class_> >(*(*this)); }

    std::weak_ptr<_base_some_class_> toWeakPointer() const { return *this; }

    ~Stack()=default;
    Stack(const Stack&)=default;
    Stack(Stack&&)=default;
    template<typename _U>Stack(Stack<_U>&&v):__Super(std::move(v)) {}
    template<typename _U>Stack(const Stack<_U>&v):__Super(v) {}
    template<typename _U>Stack(Stack<_U>&v):__Super(v) {}
    Stack&operator=(const Stack&)=default;
    Stack&operator=(Stack&&)=default;

    typedef typename element_type::size_type size_type;
    size_type size()const { return _this_const_get().size(); }
    size_type length()const { return size(); }
};
}/*spr*/

template<typename __T,typename __C=std::vector<__T>>using Stack=spr::Stack< std::stack<__T,__C> >;
template<typename __T,typename __C=std::vector<__T>>using ConstStack=spr::Stack<const std::stack<__T,__C> >;

}/*cct*/

#endif



