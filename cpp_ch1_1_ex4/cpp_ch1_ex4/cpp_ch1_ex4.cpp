#include <iostream>

int main(void)
{
    int sell;
    int bonus;
    int salary;
    while (1)
    {
        std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin >> sell;
        
        if (sell == -1)
        {
            std::cout << "프로그램을 종료합니다.";
            break;
        }
        else
        {
            bonus = sell * 0.12;
            salary =50+ bonus;
            std::cout << "이번 달 급여: " << salary << "만원" << std::endl;
        }
    }
    return 0;
}
  