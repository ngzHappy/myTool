#include "../Containers/PriorityQueue.hpp"

void PriorityQueueTest(){

    std::vector<int> v{1,2,3};
    cct::PriorityQueue<int,std::vector<int>> q(std::piecewise_construct, v.begin(),v.end());
    q.size();

}
