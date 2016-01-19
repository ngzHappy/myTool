#include <iostream>

using namespace std;

extern void vector_test();
extern void listTest();
extern void deque_test();
extern void Forward_list();
extern void maptest();
extern void function_test();
extern void setTest();
extern void multimuaptest();

int main()
{
    function_test();
    vector_test();
    listTest();
    deque_test();
    Forward_list();
    maptest();
    multimuaptest();
    setTest();
    system("pause");
    return 0;
}
