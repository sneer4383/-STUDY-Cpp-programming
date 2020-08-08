#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    srand(time(NULL));
    for (int i = 0;i < 5;i++)
    {
        int num = rand();
        std::cout << num << std::endl;
    }
    return 0;
}