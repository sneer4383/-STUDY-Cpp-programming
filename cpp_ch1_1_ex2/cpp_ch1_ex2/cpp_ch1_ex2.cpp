#include <iostream>

int main(void)
{
    char name[20];
    char number[15];

    std::cout << "이름을 입력해주세요: ";
    std::cin >> name;

    std::cout << "전화번호를 입력해주세요: ";
    std::cin >> number;

    std::cout << "이름: " << name << std::endl;
    std::cout << "전화번호: " << number << std::endl;
    return 0;
}
