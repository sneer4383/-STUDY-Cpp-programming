#include <iostream>

int main(void)
{
    int num[5];
    int result = 0;
    for (int i = 0;i < 5;i++)
    {
        std::cout << i + 1 << "��° ���� �Է�: ";
        std::cin >> num[i];
        result += num[i];
    }
    std::cout << "�հ�: " << result;
    return 0;
}
