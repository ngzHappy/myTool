#include <iostream>
#include <TempOptional.hpp>
#include <string>

int main(int ,char **)
{
    TempOptional<std::string> test;
    test.emplace( "12345" );
    std::cout << *test <<std::endl;

	TempOptional<int> test1;
	test1.emplace(2);
	std::cout << *test1 << std::endl;

    return 0;
}

