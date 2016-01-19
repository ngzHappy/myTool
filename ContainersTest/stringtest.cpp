#include "../Containers/String.hpp"

void string_test(){

    cct::String str(std::piecewise_construct,"aaaa",3);
    str.size();

}
