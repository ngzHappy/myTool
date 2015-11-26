
#if !defined(PRIORITY_QUEUE__HPP__CCT)
#define PRIORITY_QUEUE__HPP__CCT

#include <queue>
#include <memory>

namespace cct{

    template<typename T>
    class Priority_queue : public std::shared_ptr< std::priority_queue<T> > {
    private:
        typedef std::shared_ptr< std::priority_queue<T> > Super;
    public:

        template<typename ... Ta>
        Priority_queue(Ta && ... args):Super(new std::priority_queue<T>( std::forward<Ta>(args) ... ) ) {}
        Priority_queue( decltype(nullptr) ) {}
        Priority_queue() :Super(new std::priority_queue<T> ){}
        Priority_queue(const Priority_queue &)=default;
        Priority_queue(Priority_queue &&)=default;
        Priority_queue(Super && o):Super( std::move(o) ) {}
        Priority_queue(const Super & o):Super( o ) {}
        
    };

}

#endif


