#include <iostream>
using namespace std;
class A
{
    int a, b, c;

public:
    A(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    }
};
int main()
{
    A on1(-10, 203, 302);
    on1.display();
    -on1;
    on1.display();
    return 0;
}