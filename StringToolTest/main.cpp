#include <iostream>
#include <string>
#include "TemplateString.hpp"


int main(int,char **)
{
    {
        TemplateString<std::string> templateString("today is a fine ${a}${b}");
        std::cout << templateString("a", "Day", "b", "!") << std::endl;
        std::cout << templateString("a", "day", "b", "!") << std::endl;
    }
    {
        TemplateString<std::wstring> templateString(L"today is a fine ${a}${b}");
        std::wcout << templateString(L"a", L"Day", L"b", L"!") << std::endl;
        std::wcout << templateString(L"a", L"day", L"b", L"!") << std::endl;
    }
    return 0;
}

/*
 * endl of the file
*/
