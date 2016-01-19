#if !defined(QUEUE__HPP__CCT)
#define QUEUE__HPP__CCT 1

#include <queue>
#include <memory>
#include <type_traits>
#include <vector>

namespace cct {
namespace spr {
template< typename _base_some_class_ >
class Queue :
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
    Queue():__Super(new element_type,_this_delete_this_()) {}
    Queue(decltype(nullptr)) {}

    template<typename _U,typename _EXPLICIT=decltype(static_cast<element_type *>(reinterpret_cast<std::remove_reference_t<_U> *>(0))) >
    Queue(_U* value):__Super(static_cast<element_type *>(value),_this_delete_this_()) {}

    Queue(const __Super & s):__Super(s) {}
    Queue(__Super && s):__Super(std::move(s)) {}
    Queue(__Super & s):__Super(s) {}

    template<typename _U>Queue(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Queue(std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Queue(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>Queue(const std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>Queue(std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>Queue(std::weak_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>Queue(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Queue(std::unique_ptr<_U> &u)=delete;
    template<typename _U>Queue(const std::unique_ptr<_U> &u)=delete;

    template<typename _U>Queue(const std::shared_ptr<_U>& x,element_type* p):__Super(x,p) {}

    template<typename A0,typename A1,typename ... Args,typename _EXPLICIT=std::enable_if_t<!(std::is_constructible<__Super,A0 &&,A1&&,Args && ...>::value)> >
    Queue(A0 && a0,A1 && a1,Args && ... args):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1),std::forward<Args>(args)...),_this_delete_this_()) {}
    template<typename A0,typename _EXPLICIT=std::enable_if_t< !(std::is_constructible<__Super,A0 &&>::value) >,typename _EMORE=void>
    Queue(A0 && a0):__Super(new element_type(std::forward<A0>(a0)),_this_delete_this_()) {}

    template<typename _U,typename _EXPLICIT=std::enable_if_t< (std::is_constructible<element_type,const std::initializer_list<_U> & >::value) > >
    Queue(const std::initializer_list<_U> & v):__Super(new element_type(v),_this_delete_this_()) {}
    const Queue< std::add_const_t<_base_some_class_> > & toConst()const { return reinterpret_cast<const Queue< std::add_const_t<_base_some_class_> > &>(*this); }

    Queue(const std::remove_const_t<element_type> & v):__Super(new element_type(v),_this_delete_this_()) {}
    Queue(std::remove_const_t<element_type> && v):__Super(new element_type(std::move(v)),_this_delete_this_()) {}
    Queue(std::remove_const_t<element_type> & v):__Super(new element_type(v),_this_delete_this_()) {}
    Queue< std::remove_const_t<_base_some_class_> > clone()const { return Queue< std::remove_const_t<_base_some_class_> >(*(*this)); }

    std::weak_ptr<_base_some_class_> toWeakPointer() const { return *this; }

    ~Queue()=default;
    Queue(const Queue&)=default;
    Queue(Queue&&)=default;
    template<typename _U>Queue(Queue<_U>&&v):__Super(std::move(v)) {}
    template<typename _U>Queue(const Queue<_U>&v):__Super(v) {}
    template<typename _U>Queue(Queue<_U>&v):__Super(v) {}
    Queue&operator=(const Queue&)=default;
    Queue&operator=(Queue&&)=default;

    typedef typename element_type::size_type size_type;
    size_type size()const { return _this_const_get().size(); }
    size_type length()const { return size(); }
};
}/*spr*/

template<typename __T,typename __C=std::vector<__T>>using Queue=spr::Queue< std::queue<__T,__C> >;
template<typename __T,typename __C=std::vector<__T>>using ConstQueue=spr::Queue<const std::queue<__T,__C> >;

}/*cct*/

#endif



