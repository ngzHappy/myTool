#include "../Containers/Function.hpp"

void function_test(){

  cct::Function<void(void)> fun =[](){} ;
  
  if (fun) {
      fun();
  }

  cct::Function<int(int,double,float)> fun1(std::piecewise_construct,[](int,double,float) {return 1; });
  fun1.toConst()(1,2,3.1f);

}
