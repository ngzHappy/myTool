#include "../Containers/Vector.hpp"
#include <iostream>

void vector_test(){

    std::cout<<"vector"<<std::endl;
    {
        cct::Vector<int> v{1,2,3,4,5};
        for (int i:v) {
            std::cout<<i<<",";
        }
       std::cout<< std::endl;
    }

    cct::Vector<int> v(12,3);
    auto v1 = v.clone();
    std::cout<<v1.size()<<","<<v1.use_count()<<std::endl;
    v1=v;

}

