#include "../Containers/Function.hpp"

void function_test(){

  cct::Function<void(void)> fun =[](){} ;
  
  if (fun) {
      fun();
  }


}
