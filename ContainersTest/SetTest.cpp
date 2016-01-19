#include "../Containers/Set.hpp"
#include <iostream>

void setTest(){

    cct::Set<int> set{1,2,3,5};


    set.begin();
    set.end();
    set.rbegin();
    set.rend();
    set.cbegin();
    set.cend();
    set.crbegin();
    set.crend();
    set.size();

}
