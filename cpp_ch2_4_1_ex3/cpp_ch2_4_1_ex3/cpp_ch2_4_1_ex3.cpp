#include <iostream>

void SwapPointer(int*(& rptr1), int*(& rptr2))
{
    int* temp = rptr1;
    rptr1 = rptr2;
    rptr2 = temp;
}

int main()
{
    int num1 = 5;
    int* ptr1 = &num1;
    int num2 = 10;
    int* ptr2 = &num2;

    SwapPointer(ptr1, ptr2);

    std::cout << "ptr1=" << *ptr1 << std::endl;
    std::cout << "ptr2=" << *ptr2 << std::endl;
    return 0;
}