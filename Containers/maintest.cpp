#include "TemplateString.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <tuple>
#include <vector>
using namespace std::string_literals;
typedef std::tuple< std::string, std::string, int ,std::string> Item;
std::vector< Item >files{
    Item{"vector"s,"Vector"s,1,"vector"s},
    Item{"list"s,"List"s,1,"list"s},
    Item{"unordered_multiset"s,"Unordered_multiset"s,1,"unordered_set"s},
    Item{"unordered_set"s,"Unordered_set"s,1,"unordered_set"s},
    Item{"unordered_map"s,"Unordered_map"s,2,"unordered_map"s},
    Item{"unordered_multimap"s,"Unordered_multimap"s,2,"unordered_map"s},
    Item{"stack"s,"Stack"s,1,"stack"s},
    Item{"set"s,"Set"s,1,"set"s},
    Item{"multiset"s,"Multiset"s,1,"set"s},
    Item{"queue"s,"Queue"s,1,"queue"s},
    Item{"priority_queue"s,"Priority_queue"s,1,"queue"s},
    Item{"map"s,"Map"s,2,"map"s},
    Item{"multimap"s,"Multimap"s,2,"map"s},
    Item{"forward_list"s,"Forward_list"s,1,"forward_list"s},
    Item{"deque"s,"Deque"s,1,"deque"s}

};

std::string code=u8R"(
#if !defined(${LIST}__HPP__CCT)
#define ${LIST}__HPP__CCT

#include <${include}>
#include <memory>

namespace cct{

    template<typename T>
    class ${List} : public std::shared_ptr< std::${list}<T> > {
    private:
        typedef std::shared_ptr< std::${list}<T> > Super;
    public:

        ${List}( decltype(nullptr) ) {}
        ${List}() :Super(new std::${list}<T> ){}
        ${List}(const ${List} &)=default;
        ${List}(${List} &&)=default;
        ${List}(Super && o):Super( std::move(o) ) {}
        ${List}(const Super & o):Super( o ) {}
        ${List}(const std::${list}<T> & o):Super( new std::${list}<T>( o ) ) {}
        ${List}(std::${list}<T> && o):Super( new std::${list}<T>( std::move(o) ) ) {}

        ${List}&operator=(const ${List}&)=default;
        ${List}&operator=(${List}&&)=default;

        ${List} copy() const { return ${List}( *(*this) ); }
        ${List} unique_copy() const { if (this->use_count()<2) { return *this; }return copy(); }

    };

}

#endif


)";

std::string code1=u8R"(
#if !defined(${LIST}__HPP__CCT)
#define ${LIST}__HPP__CCT

#include <${include}>
#include <memory>

namespace cct{

    template<typename T,typename U>
    class ${List} : public std::shared_ptr< std::${list}<T,U> > {
    private:
        typedef std::shared_ptr< std::${list}<T,U> > Super;
    public:

        ${List}( decltype(nullptr) ) {}
        ${List}() :Super(new std::${list}<T,U> ){}
        ${List}(const ${List} &)=default;
        ${List}(${List} &&)=default;
        ${List}(Super && o):Super( std::move(o) ) {}
        ${List}(const Super & o):Super( o ) {}
        ${List}(const std::${list}<T,U> & o):Super( new std::${list}<T,U>( o ) ) {}
        ${List}(std::${list}<T,U> && o):Super( new std::${list}<T,U>( std::move(o) ) ) {}

        ${List}&operator=(const ${List}&)=default;
        ${List}&operator=(${List}&&)=default;

        ${List} copy() const { return ${List}( *(*this) ); }
        ${List} unique_copy() const { if (this->use_count()<2) { return *this; }return copy(); }

    };

}

#endif

)";

std::string code2=u8R"(
namespace spt{

    class ${List} : public std::shared_ptr< class ${list} > {
    private:
        typedef std::shared_ptr< class ${list} > Super;
    public:

        ${List}( decltype(nullptr) ) {}
        ${List}() :Super( new class ${list} ){}
        ${List}(const ${List} &)=default;
        ${List}(${List} &&)=default;
        ${List}(Super && o):Super( std::move(o) ) {}
        ${List}(const Super & o):Super( o ) {}
        ${List}(const class ${list} & o):Super( new class ${list}( o ) ) {}
        ${List}(class ${list} && o):Super( new class ${list}( std::move(o) ) ) {}

        ${List}&operator=(const ${List}&)=default;
        ${List}&operator=(${List}&&)=default;

        ${List} copy() const { return ${List}( *(*this) ); }
        ${List} unique_copy() const { if (this->use_count()<2) { return *this; }return copy(); }

    };

}
)";

std::string toUpper(const std::string & source_ ){
    std::string source=source_;
    for( auto & i : source ){
        if ( (i>='a')&&(i<='z') ) {
            i-='a'-'A';
        }
    }
    return source;
}

#include "Containers.hpp"



int main( int argc,char ** argv ) {

    if (argc > 1) {
        std::string namespace_="::";
        if (argc > 2) {
            namespace_=argv[2]+"::"s;
        }

        Item i{ namespace_+argv[1],argv[1],1,argv[1] };
        TemplateString<std::string> templateString2( code2 );
        std::ofstream ofs(std::get<1>(i)+std::string("spt.hpp"));
        ofs<<templateString2(
            "list"s, std::get<0>(i),
            "List"s, std::get<1>(i),
            "LIST"s, toUpper( std::get<0>(i) ),
            "include"s,std::get<3>(i)
            )<<std::endl;
        return 0;
    }

    TemplateString<std::string> templateString( code );
    TemplateString<std::string> templateString1( code1 );
    for ( const auto & i:files ) {
        if ( std::get<2>(i) == 1 ) {
            std::ofstream ofs(std::get<1>(i)+std::string(".hpp"));
            ofs<<templateString(
                "list"s, std::get<0>(i),
                "List"s, std::get<1>(i),
                "LIST"s, toUpper( std::get<0>(i) ),
                "include"s,std::get<3>(i)
                )<<std::endl;
        }
        else {
            std::ofstream ofs(std::get<1>(i)+std::string(".hpp"));
            ofs<<templateString1(
                "list"s, std::get<0>(i),
                "List"s, std::get<1>(i),
                "LIST"s, toUpper( std::get<0>(i) ),
                "include"s,std::get<3>(i)
                )<<std::endl;
        }
    }

    //test
    /*cct::Deque<int> deque;
    cct::Forward_list<int> forward_list;
    cct::List<int>  list;
    cct::Map<int, double> map;
    cct::Multimap<int, double> multimap;
    cct::Multiset<int> multiset;
    cct::Priority_queue<int> priority_queue;
    cct::Queue<int> queue;
    cct::Set<int> set;
    cct::Stack<int> stack;
    cct::Unordered_map<int, int> unordered_map;
    cct::Unordered_multimap<int, int> unordered_multimap;
    cct::Unordered_multiset<int> unordered_set;
    cct::Vector<int> vector;*/

}

