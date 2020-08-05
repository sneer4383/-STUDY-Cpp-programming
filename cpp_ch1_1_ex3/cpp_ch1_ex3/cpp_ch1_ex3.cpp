#include <iostream>

int main(void)
{
    int num;
    std::cout << "숫자를 입력하세요: ";
    std::cin >> num;

    for (int i = 0;i < 9;i++)
    {
        std::cout << num << "*" << i + 1 << "=" << num * (i + 1) << std::endl;
    }

    return 0;
}