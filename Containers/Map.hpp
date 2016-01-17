
#if !defined(MAP__HPP__CCT)
#define MAP__HPP__CCT

#include <map>
#include <memory>
#include <type_traits>

namespace cct{

namespace base {
template<typename T,typename U>
class Map:public std::map<T,U> {
    typedef std::map<T,U> _Super;
public:
    using _Super::_Super;
    Map()=default;
    Map(const Map &)=default;
    Map(Map &&)=default;
    Map(const _Super &v):_Super(v) {}
    Map(_Super &&v):_Super(std::move(v)) {}
    Map&operator=(Map &&)=default;
    Map&operator=(const Map &)=default;
    static void deleteThis(Map * v) { delete v; }
};
}

template<typename __0X,typename __1X>
class Map :
    public std::shared_ptr< cct::base::Map<__0X,__1X> >{
private:
    typedef std::shared_ptr< cct::base::Map<__0X,__1X> > __Super;
    typedef typename __Super::element_type element_type;
    const element_type * _get_const()const { return this->get(); }
    element_type * _get() { return this->get(); }
public:
    typedef typename element_type::key_type key_type;
    typedef typename element_type::mapped_type mapped_type;
    typedef typename element_type::const_iterator const_iterator;
    typedef typename element_type::size_type size_type;
    typedef typename element_type::value_type value_type;
    size_type size() const { return _get_const()->size(); }
    size_type length()const { return size(); }

    auto find(const key_type & v) const { return _get_const()->find(v); }
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

    Map():__Super(new element_type,&element_type::deleteThis){}
    Map(decltype(nullptr)) {}
    template<typename _U,typename _EXPLICIT= decltype( static_cast<element_type *>( reinterpret_cast< std::remove_reference_t<_U> *>(0) ) ) >
    Map(_U* value):__Super(static_cast<element_type * >(value) ,&element_type::deleteThis) {}
    Map(const __Super & s):__Super(s) {}
    template<typename _U>Map(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Map(const std::weak_ptr<_U> &u):__Super(u) {}
    Map(__Super && s):__Super(std::move(s)) {}
    template<typename _U>Map(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Map(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Map(const std::shared_ptr<_U>& x,element_type* p) :__Super(x,p){}
    template<typename A0,typename A1, typename ... Args>
    Map(A0 && a0,A1 && a1, Args && ... args ):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1), std::forward<Args>(args)... ),&element_type::deleteThis){}
    template<typename A0,typename _EXPLICIT=decltype( new element_type( std::declval<A0>() ) ) ,typename _EMORE=void>
    Map(A0 && a0 ):__Super(new element_type( std::move(a0) ),&element_type::deleteThis ) {}
    template<typename A0,typename _EXPLICIT=decltype( new element_type( *(reinterpret_cast<std::remove_reference_t<A0> *>(0)) ) )>
    Map(A0 & a0 ):__Super(new element_type( a0 ),&element_type::deleteThis ) {}
    Map(const std::initializer_list< value_type > & v):__Super(new element_type(v),&element_type::deleteThis) {}

    ~Map()=default;
    Map(const Map&)=default;
    Map(Map&&)=default;
    Map&operator=(const Map&)=default;
    Map&operator=(Map&&)=default;

    class WriteCopy;
    const WriteCopy & copy() const { return reinterpret_cast<WriteCopy &>(const_cast<Map &>(*this));  }

};

template<typename __0X,typename __1X>
class Map<__0X,__1X>::WriteCopy:
    public Map{
public:
    using Map::Map;
    WriteCopy(const Map & v):Map(v) {}
    WriteCopy(Map && v):Map(std::move(v)) {}
    WriteCopy()=default;
    WriteCopy(const WriteCopy &)=default;
    WriteCopy(WriteCopy &&)=default;
    WriteCopy&operator=(const WriteCopy &)=default;
    WriteCopy&operator=(WriteCopy &&)=default;
    std::add_const_t<element_type> * operator->()const {
        static_assert(sizeof(Map)==sizeof(WriteCopy),"you can not add any data");
        return Map::operator->();
    }
    element_type * operator->() {
        if(*this){if (this->unique()==false) {*this = Map( new element_type( *(*this) ) );}}
        return Map::operator->();
    }
    std::add_const_t<element_type> * get()const { return this->operator->(); }
    element_type * get(){ return this->operator->(); }
    const WriteCopy & copy() const { return *this; }

    auto begin() { return get()->begin(); }
    auto end() { return get()->end(); }
    auto rbegin() { return get()->rbegin(); }
    auto rend() { return get()->rend(); }

};


}

#endif


