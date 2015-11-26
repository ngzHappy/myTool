
#if !defined(MULTIMAP__HPP__CCT)
#define MULTIMAP__HPP__CCT

#include <map>
#include <memory>

namespace cct{

    template<typename T,typename U>
    class Multimap : public std::shared_ptr< std::multimap<T,U> > {
    private:
        typedef std::shared_ptr< std::multimap<T,U> > Super;
    public:
    
        template<typename ... Ta>
        Multimap(Ta && ... args):Super(new std::multimap<T,U>( std::forward<Ta>(args) ... ) ) {}
        Multimap( decltype(nullptr) ) {}
        Multimap() :Super(new std::multimap<T,U> ){}
        Multimap(const Multimap &)=default;
        Multimap(Multimap &&)=default;
        Multimap(Super && o):Super( std::move(o) ) {}
        Multimap(const Super & o):Super( o ) {}
        
    };

}

#endif


