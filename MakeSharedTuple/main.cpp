#if !defined( MAKE__SHARED__TUPLE__ )
#define MAKE__SHARED__TUPLE__

#include <memory>
#include <tuple>
#include <type_traits>
template<typename ... Args_>
auto make_shared_tuple( Args_ && ... args_ ) {
    /*
    to make values as tuple for lambda pack
    example :auto parameter = make_shared_tuple(1,2,3); [parameter](){ ... }
    */
    typedef decltype( std::make_tuple( std::forward<Args_>(args_)... ) ) RTuple_ ;
    typedef typename std::remove_reference< RTuple_ >::type Tuple_;
    return std::make_shared< Tuple_ >( std::forward<Args_>(args_)... );
}

#endif

int  main() {

    auto jjd = make_shared_tuple(1,2,3);
    int a=12;
    auto yyy = make_shared_tuple(a,a,a);
    int jjx=234;
}
