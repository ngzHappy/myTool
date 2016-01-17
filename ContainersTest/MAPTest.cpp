#include "../Containers/Map.hpp"
#include <map>
void maptest(){
   cct::Map<int,int> yy{ {1,2},{2,3} };
   
   yy.begin();
   yy.end();

   yy.rbegin();
   yy.rend();

}
