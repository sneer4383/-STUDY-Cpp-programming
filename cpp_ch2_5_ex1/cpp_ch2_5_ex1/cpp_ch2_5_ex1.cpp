#include <iostream>
using namespace std;
typedef struct __Point
{
    int xpos;
    int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
    Point* sum = new Point;
    sum->xpos = (p1.xpos) + (p2.xpos);
    sum->ypos = (p1.ypos) + (p2.ypos);
    return *sum;
}

int main()
{
    Point* ptr1 = new Point;
    ptr1->xpos = 1;
    ptr1->ypos = 2;

    Point* ptr2 = new Point;
    ptr2->xpos = 3;
    ptr2->ypos = 4;

    Point& readd = PntAdder(*ptr1, *ptr2);
    cout << "result (" << readd.xpos << ", " << readd.ypos << ")" << endl;

    delete ptr1;
    delete ptr2;
    delete& readd;
    
    return 0;
}

