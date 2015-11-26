
#if !defined(UNORDERED_SET__HPP__CCT)
#define UNORDERED_SET__HPP__CCT

#include <unordered_set>
#include <memory>

namespace cct{

    template<typename T>
    class Unordered_set : public std::shared_ptr< std::unordered_set<T> > {
    private:
        typedef std::shared_ptr< std::unordered_set<T> > Super;
    public:

        template<typename ... Ta>
        Unordered_set(Ta && ... args):Super(new std::unordered_set<T>( std::forward<Ta>(args) ... ) ) {}
        Unordered_set( decltype(nullptr) ) {}
        Unordered_set() :Super(new std::unordered_set<T> ){}
        Unordered_set(const Unordered_set &)=default;
        Unordered_set(Unordered_set &&)=default;
        Unordered_set(Super && o):Super( std::move(o) ) {}
        Unordered_set(const Super & o):Super( o ) {}
        
    };

}

#endif



