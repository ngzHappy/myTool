#include "../Containers/Vector.hpp"
#include <iostream>

void vector_test(){

    {
        cct::Vector<int> v;
    }

    {
        cct::Vector<int> v{1,2,3,4,5};
        for (const auto i:v) {
            std::cout<<i<<std::endl;
        }
        std::cout<<v.size()<<std::endl;
    }

    {
        cct::Vector<int> v(2,0);
        for (const auto i:v) {
            std::cout<<i<<std::endl;
        }
        std::cout<<v.size()<<std::endl;
    
        v[0]=1111;

        auto wv=v.copy();
        wv[1]=222;
        for (const auto i:wv) {
            std::cout<<i<<std::endl;
        }


    }

}

