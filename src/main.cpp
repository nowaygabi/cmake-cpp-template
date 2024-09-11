#include <cool.h>
#include <iostream>

int main()
{
    std::string value = hello::greeting();

    std::cout << value << std::endl;
    return 0;
}