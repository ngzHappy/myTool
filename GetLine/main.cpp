#include "getLine.hpp"
#include <sstream>

int main(int,char **)
{

	{
		std::stringstream v0("1234");
		std::stringstream v1;
		getLine(v0, v1);
		std::cout << v1.rdbuf() << std::endl;
		std::cout << std::boolalpha << v0.eof() << std::endl;
		std::cout << v0.rdbuf() << std::endl;
	}

	{
		std::wstringstream v1;
		getLine(std::wcin, v1);
		std::wcout << v1.rdbuf();
		float value;
		std::wcin >> value;
		std::wcout << value;
	}

#ifdef  _MSC_VER
	system("pause");
#endif //  _MSC_VER
 
    return 0;
}

