#include <iostream>

using namespace std;
#include "Containers.hpp"
#include "String.hpp"
int Xmain()
{

    {
        cct::Deque<int> v;
        v->push_back(12);
        v->push_back(13);

        for( const auto & i:v ){
            std::cout << i<<std::endl;
        }
    }

    {
        cct::Forward_list<int> v;
        for( const auto & i:v ){
            std::cout << i<<std::endl;
        }
    }

    {
        cct::List<int> v;
        for( const auto & i:v ){
            std::cout << i<<std::endl;
        }
    }

    {
        cct::String v;
        for( const auto & i:v ){
            std::cout << i<<std::endl;
        }
    }

    {
        cct::Vector<int> v;
        for( const auto & i:v ){
            std::cout << i<<std::endl;
        }
    }

    {
        cct::Map<int,double> v;
        for( const auto & i:v ){
            std::cout << i.first <<std::endl;
        }
    }

    {
        cct::Unordered_set<int> v;
        for( const auto & i:v ){
            std::cout << i<<std::endl;
        }
    }

    {
        cct::Unordered_map<int,double> v;
        for( const auto & i:v ){
            std::cout << i.first <<std::endl;
        }
    }

    cout << "Hello World!" << endl;
    return 0;
}
