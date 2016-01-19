#include <memory>
#include <functional>
#include <type_traits>
#include <string>
int foo(int) { return 0; }

template<typename _X1>
class A {
public:
    template<typename T,typename EXPLICIT_=decltype(new std::function<_X1>(std::declval<T &&>())) >
    void goo(T &&v) { v(12); }
};


template< typename _base_some_class_ >
class SomeClass :
    public std::shared_ptr< _base_some_class_ >{
private:
    typedef std::shared_ptr< _base_some_class_ > __Super;
    typedef std::shared_ptr< std::add_const_t<_base_some_class_> > _const_Super;
    typedef typename __Super::element_type __element_type;
    static auto _this_delete_this_() { return &__element_type::deleteThis; }
    __element_type & _this_get() { return *(this->get()); }
    std::add_const_t<__element_type> & _this_const_get() const { return *(this->get()); }
public:
    typedef __element_type element_type;
    SomeClass():__Super(new element_type,_this_delete_this_()){}
    SomeClass(decltype(nullptr)) {}

    template<typename _U,typename _EXPLICIT= decltype( static_cast<element_type *>( reinterpret_cast< std::remove_reference_t<_U> *>(0) ) ) >
    SomeClass(_U* value):__Super(static_cast<element_type * >(value) ,_this_delete_this_()) {}

    SomeClass(const __Super & s):__Super(s) {}
    SomeClass(__Super && s):__Super(std::move(s)) {}
    SomeClass(__Super & s):__Super(s) {}

    template<typename _U>SomeClass(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>SomeClass(std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>SomeClass(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>SomeClass(const std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>SomeClass(std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>SomeClass(std::weak_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>SomeClass(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>SomeClass(std::unique_ptr<_U> &u)=delete;
    template<typename _U>SomeClass(const std::unique_ptr<_U> &u)=delete;

    template<typename _U>SomeClass(const std::shared_ptr<_U>& x,element_type* p) :__Super(x,p){}

    template<typename A0,typename A1, typename ... Args>
    SomeClass(A0 && a0,A1 && a1, Args && ... args ):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1), std::forward<Args>(args)... ),_this_delete_this_()){}
    template<typename A0,typename _EXPLICIT=std::enable_if_t< !(std::is_constructible<__Super,A0 &&>::value) > ,typename _EMORE=void>
    SomeClass(A0 && a0 ):__Super(new element_type( std::forward<A0>(a0) ),_this_delete_this_() ) {}

    template<typename _U,typename _EXPLICIT= std::enable_if_t< (std::is_constructible<element_type,const std::initializer_list<_U> & >::value) > >
    SomeClass(const std::initializer_list<_U> & v):__Super(new element_type(v),_this_delete_this_()) {}
    SomeClass< std::add_const_t<_base_some_class_> > toConst()const { return static_cast<const _const_Super &>(*this); }

    SomeClass( const std::remove_const_t<element_type> & v ):__Super(new element_type(v),_this_delete_this_()) {}
    SomeClass( std::remove_const_t<element_type> && v ):__Super(new element_type( std::move(v) ),_this_delete_this_()) {}
    SomeClass( std::remove_const_t<element_type> & v ):__Super(new element_type(v),_this_delete_this_()) {}
    SomeClass< std::remove_const_t<_base_some_class_> > clone()const { return SomeClass< std::remove_const_t<_base_some_class_> >(*(*this)); }
    
    std::weak_ptr<_base_some_class_> toWeakPointer() const { return *this; }

    ~SomeClass()=default;
    SomeClass(const SomeClass&)=default;
    SomeClass(SomeClass&&)=default;
    template<typename _U>SomeClass(SomeClass<_U>&&v):__Super( std::move(v) ) {}
    template<typename _U>SomeClass(const SomeClass<_U>&v):__Super( v ) {}
    template<typename _U>SomeClass(SomeClass<_U>&v):__Super( v ) {}
    SomeClass&operator=(const SomeClass&)=default;
    SomeClass&operator=(SomeClass&&)=default;
};

#include <memory>

namespace spr {
template< typename _base_some_class_ >
class Function :
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
    Function():__Super(new element_type,_this_delete_this_()){}
    Function(decltype(nullptr)) {}

    template<typename _U,typename _EXPLICIT= decltype( static_cast<element_type *>( reinterpret_cast< std::remove_reference_t<_U> *>(0) ) ) >
    Function(_U* value):__Super(static_cast<element_type * >(value) ,_this_delete_this_()) {}

    Function(const __Super & s):__Super(s) {}
    Function(__Super && s):__Super(std::move(s)) {}
    Function(__Super & s):__Super(s) {}

    template<typename _U>Function(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Function(std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>Function(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Function(const std::shared_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>Function(const std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>Function(std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>Function(std::weak_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Function(const std::weak_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>Function(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Function(const std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>Function(std::unique_ptr<_U> &u)=delete;
    template<typename _U>Function(const std::unique_ptr<_U> &u)=delete;

    template<typename _U>Function(const std::shared_ptr<_U>& x,element_type* p) :__Super(x,p){}

    template<typename A0,typename A1, typename ... Args>
    Function(A0 && a0,A1 && a1, Args && ... args ):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1), std::forward<Args>(args)... ),_this_delete_this_()){}

    /**/
    template<
        typename A0,
        typename _EXPLICIT= std::enable_if_t< !std::is_constructible<__Super,A0 &&>::value > ,
        typename _EMORE=void
    >
    Function(A0 && a0 ):__Super(new element_type( std::forward<A0>(a0) ),_this_delete_this_() ) {}

    template<typename _U>
    Function(const std::initializer_list<_U> & v):__Super(new element_type(v),_this_delete_this_()) {}
    Function< std::add_const_t<_base_some_class_> > toConst()const { return static_cast<const _const_Super &>(*this); }

    Function( const std::remove_const_t<element_type> & v ):__Super(new element_type(v),_this_delete_this_()) {}
    Function( std::remove_const_t<element_type> && v ):__Super(new element_type( std::move(v) ),_this_delete_this_()) {}
    Function( std::remove_const_t<element_type> & v ):__Super(new element_type(v),_this_delete_this_()) {}
    Function( const std::remove_const_t<element_type> && v ):__Super(new element_type( std::move(v) ),_this_delete_this_()) {}

    Function< std::remove_const_t<_base_some_class_> > clone()const { return Function< std::remove_const_t<_base_some_class_> >(*(*this)); }

    ~Function()=default;
    Function(const Function&)=default;
    Function(Function&&)=default;
    template<typename _U>Function(Function<_U>&&v):__Super( std::move(v) ) {}
    template<typename _U>Function(const Function<_U>&v):__Super( v ) {}
    template<typename _U>Function(const Function<_U>&&v):__Super( std::move(v) ) {}
    template<typename _U>Function(Function<_U>&v):__Super( v ) {}
    Function&operator=(const Function&)=default;
    Function&operator=(Function&&)=default;
};



}

template<typename T>
using Function=spr::Function< std::function<T> >;
template<typename T>
using ConstFunction=spr::Function<const std::function<T> >;

namespace spr {
template< typename _base_some_class_ >
class String :
    public std::shared_ptr< _base_some_class_ >{
private:
    typedef std::shared_ptr< _base_some_class_ > __Super;
    typedef std::shared_ptr< std::add_const_t<_base_some_class_> > _const_Super;
    typedef typename __Super::element_type __element_type;
    static auto _this_delete_this_() { return [](__element_type *v) {delete v; }; }
    __element_type & _this_get() { return *(this->get()); }
    std::add_const_t<__element_type> & _this_const_get() const { return *(this->get()); }
public:
    typedef __element_type element_type;
    String():__Super(new element_type,_this_delete_this_()){}
    String(decltype(nullptr)) {}

    template<typename _U,typename _EXPLICIT= decltype( static_cast<element_type *>( reinterpret_cast< std::remove_reference_t<_U> *>(0) ) ) >
    String(_U* value):__Super(static_cast<element_type * >(value) ,_this_delete_this_()) {}

    String(const __Super & s):__Super(s) {}
    String(__Super && s):__Super(std::move(s)) {}
    String(__Super & s):__Super(s) {}

    template<typename _U>String(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>String(std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>String(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>String(const std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>String(std::weak_ptr<_U> &u):__Super(u) {}
    template<typename _U>String(std::weak_ptr<_U> &&u):__Super(std::move(u)) {}

    template<typename _U>String(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>String(std::unique_ptr<_U> &u)=delete;
    template<typename _U>String(const std::unique_ptr<_U> &u)=delete;

    template<typename _U>String(const std::shared_ptr<_U>& x,element_type* p) :__Super(x,p){}

    template<typename A0,typename A1, typename ... Args>
    String(A0 && a0,A1 && a1, Args && ... args ):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1), std::forward<Args>(args)... ),_this_delete_this_()){}
    template<typename A0,typename _EXPLICIT=std::enable_if_t< !(std::is_constructible<__Super,A0 &&>::value) > ,typename _EMORE=void>
    String(A0 && a0 ):__Super(new element_type( std::forward<A0>(a0) ),_this_delete_this_() ) {}

    template<typename _U,typename _EXPLICIT= std::enable_if_t< (std::is_constructible<element_type,const std::initializer_list<_U> & >::value) > >
    String(const std::initializer_list<_U> & v):__Super(new element_type(v),_this_delete_this_()) {}
    String< std::add_const_t<_base_some_class_> > toConst()const { return static_cast<const _const_Super &>(*this); }

    String( const std::remove_const_t<element_type> & v ):__Super(new element_type(v),_this_delete_this_()) {}
    String( std::remove_const_t<element_type> && v ):__Super(new element_type( std::move(v) ),_this_delete_this_()) {}
    String( std::remove_const_t<element_type> & v ):__Super(new element_type(v),_this_delete_this_()) {}

    std::weak_ptr<_base_some_class_> toWeakPointer() const { return *this; }

    String< std::remove_const_t<_base_some_class_> > clone()const { return String< std::remove_const_t<_base_some_class_> >(*(*this)); }

    ~String()=default;
    String(const String&)=default;
    String(String&&)=default;
    template<typename _U>String(String<_U>&&v):__Super( std::move(v) ) {}
    template<typename _U>String(const String<_U>&v):__Super( v ) {}
    template<typename _U>String(String<_U>&v):__Super( v ) {}
    String&operator=(const String&)=default;
    String&operator=(String&&)=default;
};



}

using String=spr::String<std::string>;

#include <iostream>



int main() {

    //  std::function<void(void)> fxxe=[]() {std::cout<<"Hellow Word"<<std::endl; };

    Function<void(void)> func=[]() {};
    auto ff  = func.toConst();
    //ff->operator()();

    ConstFunction<void(void)> funx( func ) ;
    //funx();
    //func();

    if (func) {}


    const String s{ "aaaaaaaaa" };
    std::string sss{"sfsfssssssss"};

    String sb{ std::move(s) };
    sb=sb.clone();

    auto ws=s.toWeakPointer();
    std::cout<< *(ws.lock())<<std::endl;

}

