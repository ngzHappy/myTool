#include "../Containers/Queue.hpp"


void queuetest(){

    std::vector<int> v{1,2,3};
    cct::Queue<int> q(v);
    q.size();

}
