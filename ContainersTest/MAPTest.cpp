#include "../Containers/Map.hpp"
#include <map>
void maptest(){
   cct::Map<int,int> yy{ {1,2},{2,3} };

   yy.begin();
   yy.end();

   yy.rbegin();
   yy.rend();

   auto & y1=yy.toConst();
   yy.size();

   auto y2=y1.clone();
   y2.size();
}
