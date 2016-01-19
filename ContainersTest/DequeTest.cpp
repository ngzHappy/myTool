#include "../Containers/Deque.hpp"

void deque_test(){

    cct::Deque<int> v{1,2,3};

    auto cv = v.clone();
    cv.cbegin();
    cv.cend();

    v.cbegin();
    v.cend();

    v.rbegin();
    v.rend();

    v.size();

    v.clone().size();

    cct::Deque<int> vx(std::piecewise_construct,12,1);
    vx.size();
}
