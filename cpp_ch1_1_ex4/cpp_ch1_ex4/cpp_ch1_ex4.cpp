#include <iostream>

int main(void)
{
    int sell;
    int bonus;
    int salary;
    while (1)
    {
        std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
        std::cin >> sell;
        
        if (sell == -1)
        {
            std::cout << "���α׷��� �����մϴ�.";
            break;
        }
        else
        {
            bonus = sell * 0.12;
            salary =50+ bonus;
            std::cout << "�̹� �� �޿�: " << salary << "����" << std::endl;
        }
    }
    return 0;
}
  