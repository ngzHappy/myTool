
#if !defined(MULTISET__HPP__CCT)
#define MULTISET__HPP__CCT

#include <set>
#include <memory>

namespace cct{

    template<typename T>
    class Multiset : public std::shared_ptr< std::multiset<T> > {
    private:
        typedef std::shared_ptr< std::multiset<T> > Super;
    public:

        template<typename ... Ta>
        Multiset(Ta && ... args):Super(new std::multiset<T>( std::forward<Ta>(args) ... ) ) {}
        Multiset( decltype(nullptr) ) {}
        Multiset() :Super(new std::multiset<T> ){}
        Multiset(const Multiset &)=default;
        Multiset(Multiset &&)=default;
        Multiset(Super && o):Super( std::move(o) ) {}
        Multiset(const Super & o):Super( o ) {}
        
    };

}

#endif



