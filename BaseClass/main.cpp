
#include <memory>
#include <type_traits>
#include <iostream>

namespace spr {
class SomeClass;
}

class SomeClass {
protected:

    friend spr::SomeClass;
    class SomeClassManager {
    public:
        SomeClassManager();
        ~SomeClassManager();
        static void deleteData( SomeClass * );
    };
    static SomeClassManager thisManager;
    ~SomeClass();

public:
    SomeClass();
    SomeClass(int,double ,int) {}
    SomeClass(int) {}
    void foo()const {
        std::cout<<"123"<<std::endl;
    }

    static void deleteThis(SomeClass * v) { delete v; }
};

namespace spr {

class SomeClass :
    public std::shared_ptr< ::SomeClass >{
private:
    typedef std::shared_ptr< element_type > __Super;
public:
    SomeClass():__Super(new element_type,&element_type::deleteThis){}
    SomeClass(decltype(nullptr)) {}
    template<typename _U> SomeClass(_U* const & value):__Super(static_cast<element_type * const &>(value) ,&element_type::deleteThis) {}
    SomeClass(const __Super & s):__Super(s) {}
    template<typename _U>SomeClass(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>SomeClass(const std::weak_ptr<_U> &u):__Super(u) {}
    SomeClass(__Super && s):__Super(std::move(s)) {}
    template<typename _U>SomeClass(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>SomeClass(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>SomeClass(const shared_ptr<_U>& x,element_type* p) :__Super(x,p){}
    template<typename A0,typename A1, typename ... Args>
    SomeClass(A0 && a0,A1 && a1, Args && ... args ):__Super(new element_type(std::forward<A0>(a0),std::forward<A1>(a1), std::forward<Args>(args)... ),&element_type::deleteThis){}
    template<typename A0,typename _EXPLICIT=decltype( new element_type( std::declval<A0>() ) )>
    SomeClass( A0 && a0 ):__Super(new element_type( std::move(a0) ),&element_type::deleteThis ) {}
    template<typename A0,typename _EXPLICIT=decltype( new element_type( *(reinterpret_cast<const A0 *>(0)) ) )>
    SomeClass(const A0 & a0 ):__Super(new element_type( a0 ),&element_type::deleteThis ) {}

    ~SomeClass()=default;
    SomeClass(const SomeClass&)=default;
    SomeClass(SomeClass&&)=default;
    SomeClass&operator=(const SomeClass&)=default;
    SomeClass&operator=(SomeClass&&)=default;

    class WriteCopy;
    const WriteCopy & copy() const { return reinterpret_cast<WriteCopy &>(const_cast<SomeClass &>(*this));  }
    //friend bool operator<(const SomeClass & l,const SomeClass & r) { return (*l)<(*r); }
    //friend bool operator>(const SomeClass & l,const SomeClass & r) { return (*r)<(*l); }
    //friend bool operator<=(const SomeClass & l,const SomeClass & r) {  }
    //friend bool operator>=(const SomeClass & l,const SomeClass & r) {  }
    //friend bool operator==(const SomeClass & l,const SomeClass & r) {  }
    //friend bool operator!=(const SomeClass & l,const SomeClass & r) {  }
};

class SomeClass::WriteCopy:
    public SomeClass{
public:
    using SomeClass::SomeClass;
    WriteCopy(const SomeClass & v):SomeClass(v) {}
    WriteCopy(SomeClass && v):SomeClass(std::move(v)) {}
    WriteCopy()=default;
    WriteCopy(const WriteCopy &)=default;
    WriteCopy(WriteCopy &&)=default;
    WriteCopy&operator=(const WriteCopy &)=default;
    WriteCopy&operator=(WriteCopy &&)=default;
    std::add_const_t<element_type> * operator->()const {
        static_assert(sizeof(SomeClass)==sizeof(WriteCopy),"you can not add any data");
        return SomeClass::operator->();
    }
    element_type * operator->() {
        if (*this) {if (this->unique()==false) {*this = SomeClass( new element_type( *(*this) ) );}}
        return SomeClass::operator->();
    }
    std::add_const_t<element_type> * get()const { return this->operator->(); }
    element_type * get(){ return this->operator->(); }
    const WriteCopy & copy() const { return *this; }
};

}

class YY {
public:
    static void deleteThis(YY * v) { delete v; }
};
namespace test {

class YY :
    public std::shared_ptr< ::YY >{
private:
    typedef std::shared_ptr< element_type > __Super;
public:
    YY():__Super(new element_type,&element_type::deleteThis){}
    YY(decltype(nullptr)) {}
    template<typename _U> YY(_U*value):__Super(static_cast<element_type *>(value) ,&element_type::deleteThis) {}
    YY(const __Super & s):__Super(s) {}
    template<typename _U>YY(const std::shared_ptr<_U> &u):__Super(u) {}
    template<typename _U>YY(const std::weak_ptr<_U> &u):__Super(u) {}
    YY(__Super && s):__Super(std::move(s)) {}
    template<typename _U>YY(std::shared_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>YY(std::unique_ptr<_U> &&u):__Super(std::move(u)) {}
    template<typename _U>YY(const shared_ptr<_U>& x,element_type* p) :__Super(x,p){}
    template<typename ... Args>
    YY( Args && ... args ):__Super(new element_type( std::forward<Args>(args)... ),&element_type::deleteThis){}
    ~YY()=default;
    YY(const YY&)=default;
    YY(YY&&)=default;
    YY&operator=(const YY&)=default;
    YY&operator=(YY&&)=default;
    YY copy() const { if (*this) { return YY(new element_type(*(*this))); }return YY(); }
    //friend bool operator<(const YY & l,const YY & r) { return (*l)<(*r); }
    //friend bool operator>(const YY & l,const YY & r) { return (*r)<(*l); }
    //friend bool operator<=(const YY & l,const YY & r) {  }
    //friend bool operator>=(const YY & l,const YY & r) {  }
    //friend bool operator==(const YY & l,const YY & r) {  }
    //friend bool operator!=(const YY & l,const YY & r) {  }
};


}

int main() {

    spr::SomeClass sss(1,2,3) ;
    sss->foo();

    {
        const auto c1=sss.copy();
        c1->foo();
    }

    {
        auto _c1=sss.copy();
        auto c1=_c1.get();
        c1->foo();
        spr::SomeClass xx=_c1;
        xx=spr::SomeClass(22);
        int m=44;
        xx=spr::SomeClass(m);
        xx=spr::SomeClass(m,m,m);
    }

    spr::SomeClass s1( new SomeClass );
}

SomeClass::SomeClassManager SomeClass::thisManager;

SomeClass::~SomeClass() {
}

SomeClass::SomeClass() {
}

SomeClass::SomeClassManager::SomeClassManager() {
}

SomeClass::SomeClassManager::~SomeClassManager() {
}

void SomeClass::SomeClassManager::deleteData(SomeClass * v) {
    delete v;
}
