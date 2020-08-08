#include <iostream>

void PlusOne(int& num)
{
    num++;
}

void Rev(int& num)
{
    num *= (-1);
}

int main(void)
{
    int num=1;
    PlusOne(num);
    std::cout << num << std::endl;

    Rev(num);
    std::cout << num << std::endl;
    return 0;
}