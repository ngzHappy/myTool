
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std::literals;

auto header_begin_=u8R"(
template<typename T >
class FunctionType {
};

template<
    typename ReturnType
>
class FunctionType< ReturnType( ) > {
public:
    typedef ReturnType return_type;
    typedef void _0;
    typedef ReturnType(* function_type)();
    typedef ReturnType(std_function_type)();
    enum { arg_size = 1 };
};

template<
    typename ReturnType
>
class FunctionType< ReturnType(*)( ) > {
public:
    typedef ReturnType return_type;
    typedef void _0;
    typedef ReturnType(* function_type)();
    typedef ReturnType(std_function_type)();
    enum { arg_size = 1 };
};

template<
    typename ReturnType,
    typename ClassType
>
class FunctionType< ReturnType(ClassType::*)( ) > {
public:
    typedef ReturnType return_type;
    typedef void _0;
    typedef ReturnType(ClassType::* function_type)();
    typedef ReturnType(std_function_type)(ClassType *);
    typedef ClassType class_type;
    enum { arg_size = 1 };
};

)";

const std::string space_="    ";
const std::string endl_="\n";
std::vector<std::string> num_str_;

std::string get_function_template(int n) {
    std::stringstream ss;
    ss<<u8R"(template<
    typename ReturnType,
)";

    ss<<space_;
    ss<<"typename Arg0";

    for (int i=1; i<n; ++i) {
        ss<<","<< space_ <<endl_ << space_ ;
        ss<<"typename Arg"<<num_str_[i] ;
    }

    ss<<endl_<<">"<<endl_;

    return ss.str();
}

std::string get_pointer_function_template(int n) {
    return get_function_template(n);
}

std::string get_class_function_template(int n) {
    std::stringstream ss;
    ss<<u8R"(template<
    typename ReturnType,
    typename ClassType,
)";

    ss<<space_;
    ss<<"typename Arg0";

    for (int i=1; i<n; ++i) {
        ss<<","<< space_ <<endl_ << space_ ;
        ss<<"typename Arg"<<num_str_[i] ;
    }

    ss<<endl_<<">"<<endl_;

    return ss.str();
}

// <int(int,int)>
std::string get_function(int n ) {
    std::stringstream ss;

    ss<<get_function_template(n);

    ss<<"class FunctionType< ReturnType(" << endl_;
    std::string args_types_;
    {
        std::stringstream ss1;
        ss1<<space_<<space_<<"Arg0";
        for (int i=1; i <n; ++i) {
            ss1<<","<<space_<<endl_<<space_<<space_;
            ss1<<"Arg"<<num_str_[i];
        }
        args_types_ = ss1.str();
        ss << args_types_;
    }
    ss<<" ) > {"<<
        endl_ <<"public:"
        <<space_<< endl_<<space_;

    ss<<"typedef ReturnType return_type ;"<<space_<<endl_<<space_;
    ss<<"typedef Arg0 _0 ;"<<space_<<endl_<<space_;
    for (int i=1; i<(n ); ++i) {
        ss<<"typedef Arg"<<num_str_[i]<<" _"<<num_str_[i]<<" ; "<<space_<<endl_<<space_;
    }

    ss<<"typedef ReturnType(* function_type)("<<space_<<endl_
        <<args_types_
        <<");"<<space_<<endl_<<space_;

    ss<<"typedef ReturnType(std_function_type)("<<space_<<endl_
        <<args_types_
        <<");"<<space_<<endl_;
    ss<<space_;
    ss<<"enum { arg_size = "<<num_str_[n]<<" } ;" ;

    ss<<endl_<<"} ;"<<space_<<endl_<<space_<<endl_;
    return ss.str();
}
// <int(Class::*)(int,int)>
std::string get_class_function(int n ) {
    std::stringstream ss;
    ss<<get_class_function_template(n);
    ss<<"class FunctionType< ReturnType(ClassType:: *)(" << endl_;
    std::string args_types_;
    {
        std::stringstream ss1;
        ss1<<space_<<space_<<"Arg0";
        for (int i=1; i <n; ++i) {
            ss1<<","<<space_<<endl_<<space_<<space_;
            ss1<<"Arg"<<num_str_[i];
        }
        args_types_ = ss1.str();
        ss << args_types_;
    }
    ss<<" ) > {"<<
        endl_ <<"public:"<<space_<< endl_<<space_;

    ss<<"typedef ReturnType return_type ;"<<space_<<endl_<<space_;
    ss<<"typedef Arg0 _0 ;"<<space_<<endl_<<space_;
    for (int i=1; i<(n ); ++i) {
        ss<<"typedef Arg"<<num_str_[i]<<" _"<<num_str_[i]<<" ; "<<space_<<endl_<<space_;
    }

    ss<<"typedef ReturnType(ClassType::* function_type)("<<space_<<endl_
        <<args_types_
        <<");"<<space_<<endl_<<space_;

    ss<<"typedef ReturnType(std_function_type)("
        <<space_<<endl_
        <<space_<<space_<<"ClassType *,"<<space_<<endl_
        <<args_types_
        <<");"<<space_<<endl_;
    ss<<space_<<"typedef ClassType class_type ;"<<space_<<endl_;
    ss<<space_;
    ss<<"enum { arg_size = "<<num_str_[n]<<" } ;" ;

    ss<<endl_<<"} ;"<<space_<<endl_<<space_<<endl_;
    return ss.str();
}
// <int(*)(int,int)>
std::string get_pointer_function(int n ) {
    std::stringstream ss;
    ss<<get_pointer_function_template(n);
    ss<<"class FunctionType< ReturnType(*)(" << endl_;
    std::string args_types_;
    {
        std::stringstream ss1;
        ss1<<space_<<space_<<"Arg0";
        for (int i=1; i <n; ++i) {
            ss1<<","<<space_<<endl_<<space_<<space_;
            ss1<<"Arg"<<num_str_[i];
        }
        args_types_ = ss1.str();
        ss << args_types_;
    }
    ss<<" ) > {"<<
        endl_ <<"public:"<<space_<< endl_<<space_;

    ss<<"typedef ReturnType return_type ;"<<space_<<endl_<<space_;
    ss<<"typedef Arg0 _0 ;"<<space_<<endl_<<space_;
    for (int i=1; i<(n ); ++i) {
        ss<<"typedef Arg"<<num_str_[i]<<" _"<<num_str_[i]<<" ; "<<space_<<endl_<<space_;
    }

    ss<<"typedef ReturnType(* function_type)("<<space_<<endl_
        <<args_types_
        <<");"<<space_<<endl_<<space_;

    ss<<"typedef ReturnType(std_function_type)("<<space_<<endl_
        <<args_types_
        <<");"<<space_<<endl_;
    ss<<space_;
    ss<<"enum { arg_size = "<<num_str_[n]<<" } ;" ;

    ss<<endl_<<"} ;"<<space_<<endl_<<space_<<endl_;
    return ss.str();
}

int main() {
    std::ofstream ofs("FunctoinType.hpp");

    ofs<<std::endl;
    ofs<<std::endl;
    ofs<<std::endl;

    ofs<<header_begin_;
    enum { SIZE = 37 };

    num_str_.reserve( SIZE+10 );
    {
        std::string temp;
        for (int i=0; i<(SIZE+10); ++i) {
            std::stringstream ss;
            ss<<i;
            ss>>temp;
            num_str_.push_back( std::move(temp) );
        }
    }

    for (int i=1; i<SIZE;++i ) {
        ofs<<get_function(i);
        ofs<<get_pointer_function(i);
        ofs<<get_class_function(i);
    }

    ofs<<endl_;
    ofs<<endl_;
    ofs<<std::endl;

}

#include <functional>
#include "FunctoinType.hpp"
#include <iostream>
class TTTT {
public:
    using FooCallBacke = cct::FunctionType< void(int, int) >;
    using Foo = cct::FunctionType<void(TTTT:: *)(int ,double , std::function< FooCallBacke::std_function_type > ) > ;
public:
    auto foo(Foo::_0 ,Foo::_1 ,Foo::_2 )->Foo::return_type ;

};

TTTT::Foo::return_type TTTT::foo(Foo::_0,Foo::_1,Foo::_2  fxx) {
    fxx( 1,2 );
}

void test(){

    TTTT t;
       t.foo(1, 2, [](int a, int b) {
           std::cout<<a<<b<<std::endl; }
       );
}

