#include <iostream>

int main(void)
{
    char name[20];
    char number[15];

    std::cout << "�̸��� �Է����ּ���: ";
    std::cin >> name;

    std::cout << "��ȭ��ȣ�� �Է����ּ���: ";
    std::cin >> number;

    std::cout << "�̸�: " << name << std::endl;
    std::cout << "��ȭ��ȣ: " << number << std::endl;
    return 0;
}
