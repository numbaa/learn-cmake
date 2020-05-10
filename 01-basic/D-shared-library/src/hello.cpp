#include <iostream>
#include <shared/hello.h>

void Hello::print()
{
    std::cout << "hello, shared library" << std::endl;
}