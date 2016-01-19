#include "../Containers/Queue.hpp"


void queuetest(){

    std::vector<int> v{1,2,3};
    cct::Queue<int> q(std::piecewise_construct,v);
    q.size();

}
