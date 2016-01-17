#include "../Containers/List.hpp"

void listTest(){


    cct::List<int> list{1,2,3};

    list.begin();
    list.end();
    list.cbegin();
    list.cend();
    list.crbegin();
    list.crend();
    list.rbegin();
    list.rend();
    list.size();

}
