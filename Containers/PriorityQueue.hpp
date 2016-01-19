#if !defined(PRIORITY_QUEUE__HPP__CCT)
#define PRIORITY_QUEUE__HPP__CCT 1

#include <queue>
#include <vector>
#include <memory>
#include <type_traits>
#include <utility>

namespace cct {

namespace spr {

template< typename _base_some_class_ >
class PriorityQueue :
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
    PriorityQueue():__Super(new element_type,_this_delete_this_()) {}
    PriorityQueue(decltype(nullptr)) {}

    template<typename _U,typename _EXPLICIT=decltype(static_cast<element_type *>(reinterpret_cast<std::remove_reference_t<_U> *>(0))) >
    PriorityQueue(_U* value):__Super(static_cast<element_type *>(value),_this_delete_this_()) {}

    PriorityQueue(const __Super & s):__Super(s) {}
    PriorityQueue(__Super && s):__Super(std::move(s)) {}
    PriorityQueue(__Super & s):__Super(s) {}

    template<typename _U>PriorityQueue(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>PriorityQueue(std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>PriorityQueue(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>PriorityQueue(const std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>PriorityQueue(std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>PriorityQueue(std::weak_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename ..._U>PriorityQueue(std::unique_ptr<_U...> &&u):__Super(std::move(u)) {}
    template<typename ..._U>PriorityQueue(std::unique_ptr<_U...> &u)=delete;
    template<typename ..._U>PriorityQueue(const std::unique_ptr<_U...> &u)=delete;

    template<typename _U>PriorityQueue(const std::shared_ptr<_U>& x,element_type* p):__Super(x,p) {}

    template<typename ... Args  >
    PriorityQueue(std::piecewise_construct_t, Args && ... args ):__Super(new element_type(std::forward<Args>(args)... ),_this_delete_this_()){}

    template<typename _U,typename _EXPLICIT=std::enable_if_t< (std::is_constructible<element_type,const std::initializer_list<_U> & >::value) > >
    PriorityQueue(const std::initializer_list<_U> & v):__Super(new element_type(v),_this_delete_this_()) {}
    const PriorityQueue< std::add_const_t<_base_some_class_> > & toConst()const { return reinterpret_cast<const PriorityQueue< std::add_const_t<_base_some_class_> > &>(*this); }

    PriorityQueue(const std::remove_const_t<element_type> & v):__Super(new element_type(v),_this_delete_this_()) {}
    PriorityQueue(std::remove_const_t<element_type> && v):__Super(new element_type(std::move(v)),_this_delete_this_()) {}
    PriorityQueue(std::remove_const_t<element_type> & v):__Super(new element_type(v),_this_delete_this_()) {}
    PriorityQueue< std::remove_const_t<_base_some_class_> > clone()const { return PriorityQueue< std::remove_const_t<_base_some_class_> >(*(*this)); }

    std::weak_ptr<_base_some_class_> toWeakPointer() const { return *this; }

    ~PriorityQueue()=default;
    PriorityQueue(const PriorityQueue&)=default;
    PriorityQueue(PriorityQueue&&)=default;
    template<typename _U>PriorityQueue(PriorityQueue<_U>&&v):__Super(std::move(v)) {}
    template<typename _U>PriorityQueue(const PriorityQueue<_U>&v):__Super(v) {}
    template<typename _U>PriorityQueue(PriorityQueue<_U>&v):__Super(v) {}
    PriorityQueue&operator=(const PriorityQueue&)=default;
    PriorityQueue&operator=(PriorityQueue&&)=default;

    typedef typename element_type::size_type size_type;
    size_type size()const { return _this_const_get().size(); }
    size_type length()const { return size(); }

};

}/*spr*/

template<typename __T,typename __C=std::vector<__T>,typename __P=std::less<typename __C::value_type> >
using PriorityQueue=spr::PriorityQueue< std::priority_queue<__T,__C,__P> >;
template<typename __T,typename __C=std::vector<__T>,typename __P=std::less<typename __C::value_type> >
using ConstPriorityQueue=spr::PriorityQueue<const std::priority_queue<__T,__C,__P> >;

}/*cct*/

#endif



