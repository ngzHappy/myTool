#include "../Containers/MultiSet.hpp"
#include <iostream>

void multiset_test(){

    cct::MultiSet<int> s{1,2,3,4,5};

    s.rbegin();
    s.rend();
    s.toConst();

}
