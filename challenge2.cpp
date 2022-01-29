#include <iostream>
#include <math.h>
using namespace std;
class x1
{
    int a;
    friend class x;

public:
    x1(int n1)
    {
        a = n1;
    }
};
class x2
{
    int b;
    friend class x;

public:
    x2(int n2)
    {
        b = n2;
    }
};
class x
{
    int k1;
    friend class ret;

public:
    void firstpart(x1 o1, x2 o2)
    {
        int sum = (o2.b - o1.a) * (o2.b - o1.a);
        cout << "x: " << sum << endl;
        k1 = sum;
    }
};

class Y1
{
    friend class y;
    int c;

public:
    Y1(int n3)
    {
        c = n3;
    }
};
class y2
{
    friend class y;
    int d;

public:
    y2(int n4)
    {
        d = n4;
    }
};
class y
{
    int k2;
    friend class ret;

public:
    void secondpart(Y1 o3, y2 o4)
    {
        int sum1 = (o4.d - o3.c) * (o4.d - o3.c);
        cout << "y : " << sum1 << endl;
        k2 = sum1;
    }
};
class ret
{
public:
    void mult(x o9, y o10)
    {
        int des = sqrt(o9.k1 + o10.k2);
        cout << "The distance is : " << des << endl;
    }
};
int main()
{
    x1 t1(0);
    x2 t2(0);
    x p;
    p.firstpart(t1, t2);

    Y1 t3(1);
    y2 t4(6);
    y u;
    u.secondpart(t3, t4);

    ret he;
    he.mult(p, u);

    // This program calculates the distance between two points by using distance formula

    return 0;
}