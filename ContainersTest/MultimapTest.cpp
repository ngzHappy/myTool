#include "../Containers/Multimap.hpp"


void multimuaptest(){

    cct::MultiMap<int,int> map{{1,2},{3,4}};

    map.rbegin();
    map.rend();
    map.size();
}

