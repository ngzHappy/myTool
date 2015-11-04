
#include "cppsetget.hpp"
#include <iostream>
int main(int argc, char *argv[])try{
	 
    CppSetGet cppSetGet(argc,argv);
    const int _ans_ = cppSetGet.run();
	return _ans_;

}catch(const std::exception & v){
    std::cout << v.what() <<std::endl;
    return -1;
}

/*
*/

