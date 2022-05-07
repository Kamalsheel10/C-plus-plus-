#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    int a, b;

public:
    Point(int x, int y)
    {
        a = x;
        b = y;
    }
    friend class first;
    friend class second;
};
class first
{
    int var1;

public:
    void fun1(Point p1, Point p2)
    {
        var1 = p2.a * p2.a - p1.a * p1.a;
        cout << var1 << endl;
    }
    friend class cal;
};
class second
{
    int var2;
    friend class cal;

public:
    void fun2(Point p3, Point p4)
    {
        var2 = p4.b * p4.b - p3.b * p3.b;
        cout << var2 << endl;
    }
};
class cal
{
    int sqr;

public:
void calc(first f1, second s1){
    sqr = f1.var1+ s1.var2;
    sqr = sqrt(sqr);
    cout << "The value is :" << sqr << endl;
}
};
int main()
{
    Point d1(1, 0);
    Point d2(70, 0);
    first x1;
    second x2;
    cal x;
    x1.fun1(d1, d2);
    x2.fun2(d1, d2);
    x.calc(x1,x2);
    return 0;
}