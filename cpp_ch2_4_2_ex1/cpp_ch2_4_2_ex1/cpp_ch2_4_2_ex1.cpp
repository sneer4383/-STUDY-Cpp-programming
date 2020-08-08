#include <iostream>

int main()
{
    const int num = 12;
    const int* ptr = &num;
    const int*& rptr = ptr;

    std::cout << "ptr " << *ptr << std::endl;
    std::cout << "rptr " << *rptr << std::endl;
    return 0;
}
