#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
    char arr[30];

public:
    void SetString(const char* str)
    {
        strcpy(arr, str);
    }
    void ShowString(void)
    {
        cout << arr << endl;
    }
};

int main()
{
    Printer pnt;
    pnt.SetString("Hello world!");
    pnt.ShowString();

    pnt.SetString("I love C++");
    pnt.ShowString();
    return 0;
}