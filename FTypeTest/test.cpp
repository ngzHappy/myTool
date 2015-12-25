#include "FType.hpp"

using namespace cct;
void foo() {}
void foo(int) {}

class D {
public:
    void foo(int) {}
    void foo(int) const{}
    void foo(int) volatile{}
    void foo(int) const volatile{}
    void goo() {}
public:
    using Goo=FTYPE( &D::goo );
};

class C {
public:
    void foo(int)& {}
    void foo(int)const & {}
    void foo(int)volatile & {}
    void foo(int)const volatile & {}

    void foo(int)&& {}
    void foo(int)const && {}
    void foo(int)volatile && {}
    void foo(int)const volatile && {}

public:
    using Foo0 = FType<void(C::*)(int) &,&C::foo> ;
    typedef FType<void(C::*)(int) const&,&C::foo> Foo1;
    typedef FType<void(C::*)(int) volatile&,&C::foo> Foo2;
    typedef FType<void(C::*)(int) const volatile&,&C::foo> Foo3;
    typedef FType<void(C::*)(int) &&,&C::foo> Foo4;
    typedef FType<void(C::*)(int) const&&,&C::foo> Foo5;
    typedef FType<void(C::*)(int) volatile&&,&C::foo> Foo6;
    typedef FType<void(C::*)(int) const volatile&&,&C::foo> Foo7;
    typedef Foo0 Foo;
};

namespace abc {
namespace efg {

class E {
public:
    void foo() {}
};

}/*~efg*/
}/*~abc*/

namespace FunctionName {
namespace D{
using goo=cct::FType<decltype(&::D::goo),&::D::goo>;
using goo1=FTYPE( &::D::goo );
}
namespace abc {
namespace efg {
namespace E {
typedef ::abc::efg::E Type;
using foo=FTYPE(&Type::foo);
}
}/*~efg*/
}/*~abc*/
}

int main() {

    C c;

    C::Foo::call(c,12);

    FType<void(C::*)(int)&,&C::foo>::call(&c,1);
    FType<void(C::*)(int)const &,&C::foo>::call(&c,1);
    FType<void(C::*)(int)volatile &,&C::foo>::call(&c,1);
    FType<void(C::*)(int)const volatile &,&C::foo>::call(&c,1);

    FType<void(C::*)(int)&,&C::foo>::call(c,1);
    FType<void(C::*)(int)const &,&C::foo>::call(c,1);
    FType<void(C::*)(int)volatile &,&C::foo>::call(c,1);
    FType<void(C::*)(int)const volatile &,&C::foo>::call(c,1);

    FType<void(C::*)(int)&&,&C::foo>::call(&c,1);
    FType<void(C::*)(int)const &&,&C::foo>::call(&c,1);
    FType<void(C::*)(int)volatile &&,&C::foo>::call(&c,1);
    FType<void(C::*)(int)volatile const &&,&C::foo>::call(&c,1);

    FType<void(C::*)(int)&&,&C::foo>::call(std::move(c),1);
    FType<void(C::*)(int)const &&,&C::foo>::call(std::move(c),1);
    FType<void(C::*)(int)volatile &&,&C::foo>::call(std::move(c),1);
    FType<void(C::*)(int)volatile const &&,&C::foo>::call(std::move(c),1);

    D d;
    FType<void(D::*)(int),&D::foo>::call(&d,1); FType<void(D::*)(int),&D::foo>::call(d,1);
    FType<void(D::*)(int) const,&D::foo>::call(&d,2);FType<void(D::*)(int) const,&D::foo>::call(d,2);
    FType<void(D::*)(int) const volatile,&D::foo>::call(&d,2);FType<void(D::*)(int) const volatile,&D::foo>::call(d,2);
    FType<void(D::*)(int) volatile ,&D::foo>::call(&d,2);FType<void(D::*)(int) volatile ,&D::foo>::call(d,2);
    FType<void(D::*)(int) volatile const,&D::foo>::call(&d,2);
    D::Goo::call(d);
    
    using namespace FunctionName::D;
    goo::call(d);
    using namespace FunctionName::abc::efg::E;
    Type e;
    foo::call(e);
   
}

