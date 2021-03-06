﻿#include <iostream>

#if !defined(SHARED_FROM_SUPER_CCT)
#define SHARED_FROM_SUPER_CCT

#include <memory>

template< typename T >
class SharedFromSuper {
    std::weak_ptr<T> super;
public:

    SharedFromSuper( ) {}
    SharedFromSuper( decltype(nullptr) ) {}
    SharedFromSuper(const SharedFromSuper &) = default;
    SharedFromSuper(SharedFromSuper &&) = default;
    SharedFromSuper( std::weak_ptr<T> && u ):super( std::move(u) ) {}
    SharedFromSuper( const std::weak_ptr<T> & u ):super( u ) {}

    SharedFromSuper & operator=(const SharedFromSuper &)=default;
    SharedFromSuper & operator=(SharedFromSuper &&)=default;

    SharedFromSuper & operator=(const std::shared_ptr<T> & o ) {
        super = o;
        return *this;
    }

    SharedFromSuper & operator=(const std::weak_ptr<T> & o ) {
        super = o;
        return *this;
    }

    SharedFromSuper & operator=(  std::shared_ptr<T> && o ) {
        super = std::move( o );
        return *this;
    }

    SharedFromSuper & operator=(  std::weak_ptr<T> && o ) {
        super= std::move( o );
        return *this;
    }

    std::shared_ptr<T> lock() const {
        auto ans = super.lock();
        if (ans) { if ( ans->onDestory() ){ return std::shared_ptr<T>(); }  }
        return ans;
    }
};

#endif


using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

