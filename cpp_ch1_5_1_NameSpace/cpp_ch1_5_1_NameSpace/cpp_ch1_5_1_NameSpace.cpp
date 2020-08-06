#include <iostream>

namespace BestCom
{
    void SimpleFunc(void);
    void PrettyFunc(void);
}

namespace ProgCom
{
    void SimpleFunc(void);
}

int main(void)
{
    BestCom::SimpleFunc();
    return 0;
}

void BestCom::SimpleFunc(void)
{
    std::cout << "BestCom이 정의한 함수" << std::endl;
    PrettyFunc();
    ProgCom::SimpleFunc();
}

void BestCom::PrettyFunc(void)
{
    std::cout << "So Pretty!!" << std::endl;
}

void ProgCom::SimpleFunc(void)
{
    std::cout << "FrogCom이 정의한 함수" << std::endl;
}