
#if !defined(CHECK__ARGS__HPP__CCT)
#define CHECK__ARGS__HPP__CCT

template<unsigned int N=0, typename T0>
void checkArgs(const T0 & t0) { if ( t0 ) { return; } else { throw N; } }

template< unsigned int N = 0, typename A0 , typename ... Args >
void checkArgs( const A0 & a0 , const Args & ... args ) {
    {checkArgs<N>(a0); }return checkArgs<N+1>(  args ...  );
}

#if !defined check_args
#define check_args( ... ) checkArgs( __VA_ARGS__ )
#endif

#endif


#include <iostream>
#include <memory>
int main() {

    std::shared_ptr<int > sss ;

    try {
        check_args(new int, sss, sss, sss, sss, sss, sss, sss, sss, sss, sss);
    }
    catch ( const unsigned int & v ) {
        std::cout<<v<<std::endl;
    }

    try {
    }
    catch (const unsigned int & v) {
        std::cout<<v<<std::endl;
    }

    system("pause");

}

