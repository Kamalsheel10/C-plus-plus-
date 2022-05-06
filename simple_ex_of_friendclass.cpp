#include <iostream>
using namespace std;
class A
{
    int a, b, f, g;

public:
    void setData()
    {
        cout << "Enter the value of a and b: " << endl;
        cin >> a >> b;
        cout << "Enter the value of f and g: " << endl;
        cin >> f >> g;
    }
    friend class B;
};
class B
{
    int c, e;

public:
    void multiply(A o1)
    {
        c = o1.a * o1.b;
        e = o1.f * o1.g;
    }
    void printData()
    {
        cout << "The multiplication of two numbers are: " << c << endl;
        cout << "The multiplication of two numbers are: " << e << endl;
    }
};
int main()
{
    A num1;
    B num2;
    num1.setData();
    num2.multiply(num1);
    num2.printData();
}