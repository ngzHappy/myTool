﻿#include "../Containers/Deque.hpp"

void deque_test(){

    cct::Deque<int> v{1,2,3};

    auto cv = v.copy();
    cv.cbegin();
    cv.cend();

    v.cbegin();
    v.cend();

    v.rbegin();
    v.rend();

    v.size();

}