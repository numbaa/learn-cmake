#include <iostream>

int main()
{
    std::cout << "hello, compile flags" << std::endl;

#ifdef FLAG1
    std::cout << "flag 1" << std::endl;
#endif
    
#ifdef FLAG2
    std::cout << "flag 2" << std::endl;
#endif
    return 0;
}