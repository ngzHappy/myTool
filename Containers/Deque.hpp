
#if !defined(DEQUE__HPP__CCT)
#define DEQUE__HPP__CCT 1

#include <deque>
#include <memory>
#include <type_traits>

namespace cct {
namespace spr {

template< typename _base_some_class_ >
class Deque :
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
    Deque():__Super(new element_type,_this_delete_this_()){}
    Deque(decltype(nullptr)) {}

    template<typename _U,typename _EXPLICIT= decltype( static_cast<element_type *>( reinterpret_cast< std::remove_reference_t<_U> *>(0) ) ) >
    Deque(_U* value):__Super(static_cast<element_type * >(value) ,_this_delete_this_()) {}

    Deque(const __Super & s):__Super(s) {}
    Deque(__Super && s):__Super(std::move(s)) {}
    Deque(__Super & s):__Super(s) {}

    template<typename _U>Deque(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Deque(std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Deque(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>Deque(const std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>Deque(std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>Deque(std::weak_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>Deque(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Deque(std::unique_ptr<_U> &u)=delete;
    template<typename _U>Deque(const std::unique_ptr<_U> &u)=delete;

    template<typename _U>Deque(const std::shared_ptr<_U>& x,element_type* p) :__Super(x,p){}

    template<typename A0,typename A1, typename ... Args,typename _EXPLICIT=std::enable_if_t<!(std::is_constructible<__Super,A0 &&,A1&&,Args && ...>::value)> >
    Deque(A0 && a0,A1 && a1, Args && ... args ):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1), std::forward<Args>(args)... ),_this_delete_this_()){}
    template<typename A0,typename _EXPLICIT=std::enable_if_t< !(std::is_constructible<__Super,A0 &&>::value) > ,typename _EMORE=void>
    Deque(A0 && a0 ):__Super(new element_type( std::forward<A0>(a0) ),_this_delete_this_() ) {}

    template<typename _U,typename _EXPLICIT= std::enable_if_t< (std::is_constructible<element_type,const std::initializer_list<_U> & >::value) > >
    Deque(const std::initializer_list<_U> & v):__Super(new element_type(v),_this_delete_this_()) {}
    const Deque< std::add_const_t<_base_some_class_> > & toConst()const { return reinterpret_cast<const Deque< std::add_const_t<_base_some_class_> > &>(*this); }

    Deque( const std::remove_const_t<element_type> & v ):__Super(new element_type(v),_this_delete_this_()) {}
    Deque( std::remove_const_t<element_type> && v ):__Super(new element_type( std::move(v) ),_this_delete_this_()) {}
    Deque( std::remove_const_t<element_type> & v ):__Super(new element_type(v),_this_delete_this_()) {}
    Deque< std::remove_const_t<_base_some_class_> > clone()const { return Deque< std::remove_const_t<_base_some_class_> >(*(*this)); }

    std::weak_ptr<_base_some_class_> toWeakPointer() const { return *this; }

    ~Deque()=default;
    Deque(const Deque&)=default;
    Deque(Deque&&)=default;
    template<typename _U>Deque(Deque<_U>&&v):__Super( std::move(v) ) {}
    template<typename _U>Deque(const Deque<_U>&v):__Super( v ) {}
    template<typename _U>Deque(Deque<_U>&v):__Super( v ) {}
    Deque&operator=(const Deque&)=default;
    Deque&operator=(Deque&&)=default;

    typedef typename element_type::value_type value_type;
    typedef typename element_type::const_iterator const_iterator;
    typedef typename element_type::size_type size_type;

    size_type size() const { return _this_const_get().size(); }
    size_type length()const { return size(); }
    auto begin()const { return _this_const_get().begin(); }
    auto end() const { return _this_const_get().end(); }
    auto cbegin()const { return _this_const_get().cbegin(); }
    auto cend() const { return _this_const_get().cend(); }
    auto rbegin()const { return _this_const_get().rbegin(); }
    auto rend() const { return _this_const_get().rend(); }
    auto crbegin()const { return _this_const_get().crbegin(); }
    auto crend() const { return _this_const_get().crend(); }

    auto begin() { return _this_get().begin(); }
    auto end() { return _this_get().end(); }
    auto rbegin() { return _this_get().rbegin(); }
    auto rend() { return _this_get().rend(); }
};

}

template<typename __T>
using Deque=spr::Deque< std::deque<__T> >;
template<typename __T>
using ConstDeque=spr::Deque<const std::deque<__T> >;

}

#endif



