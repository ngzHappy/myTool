
#if !defined(FORWARD_LIST__HPP__CCT)
#define FORWARD_LIST__HPP__CCT

#include <forward_list>
#include <memory>

namespace cct{

    template<typename T>
    class Forward_list : public std::shared_ptr< std::forward_list<T> > {
    private:
        typedef std::shared_ptr< std::forward_list<T> > Super;
    public:

        template<typename ... Ta>
        Forward_list(Ta && ... args):Super(new std::forward_list<T>( std::forward<Ta>(args) ... ) ) {}
        Forward_list( decltype(nullptr) ) {}
        Forward_list() :Super(new std::forward_list<T> ){}
        Forward_list(const Forward_list &)=default;
        Forward_list(Forward_list &&)=default;
        Forward_list(Super && o):Super( std::move(o) ) {}
        Forward_list(const Super & o):Super( o ) {}
        
    };

}

#endif



