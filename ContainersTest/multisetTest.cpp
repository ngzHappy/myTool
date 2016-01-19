#include "../Containers/Multiset.hpp"
#include <iostream>

void multiset_test(){

    cct::Multiset<int> s{1,2,3,4,5};

    s.rbegin();
    s.rend();
    s.toConst();

}
