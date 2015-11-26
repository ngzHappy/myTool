
#if !defined(SET__HPP__CCT)
#define SET__HPP__CCT

#include <set>
#include <memory>

namespace cct{

    template<typename T>
    class Set : public std::shared_ptr< std::set<T> > {
    private:
        typedef std::shared_ptr< std::set<T> > Super;
    public:

        template<typename ... Ta>
        Set(Ta && ... args):Super(new std::set<T>( std::forward<Ta>(args) ... ) ) {}
        Set( decltype(nullptr) ) {}
        Set() :Super(new std::set<T> ){}
        Set(const Set &)=default;
        Set(Set &&)=default;
        Set(Super && o):Super( std::move(o) ) {}
        Set(const Super & o):Super( o ) {}
        
    };

}

#endif



