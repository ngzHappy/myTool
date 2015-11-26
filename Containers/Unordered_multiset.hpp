
#if !defined(UNORDERED_MULTISET__HPP__CCT)
#define UNORDERED_MULTISET__HPP__CCT

#include <unordered_set>
#include <memory>

namespace cct{

    template<typename T>
    class Unordered_multiset : public std::shared_ptr< std::unordered_multiset<T> > {
    private:
        typedef std::shared_ptr< std::unordered_multiset<T> > Super;
    public:

        template<typename ... Ta>
        Unordered_multiset(Ta && ... args):Super(new std::unordered_multiset<T>( std::forward<Ta>(args) ... ) ) {}
        Unordered_multiset( decltype(nullptr) ) {}
        Unordered_multiset() :Super(new std::unordered_multiset<T> ){}
        Unordered_multiset(const Unordered_multiset &)=default;
        Unordered_multiset(Unordered_multiset &&)=default;
        Unordered_multiset(Super && o):Super( std::move(o) ) {}
        Unordered_multiset(const Super & o):Super( o ) {}
        
    };

}

#endif



