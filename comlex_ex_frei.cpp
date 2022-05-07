#include <iostream>
using namespace std;
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumofReal(Complex, Complex);
};
class Complex
{
    int a, b;
    // friend class Calculator;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void printData()
    {
        cout << "The complex number is: " << a << " + " << b << "i" << endl;
    }
    friend int Calculator::sumofReal(Complex o1, Complex o2);
};
int Calculator::sumofReal(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int main()
{
    Complex c1, c2;
    Calculator cal;
    c1.setData(12, 23);
    c1.printData();

    c2.setData(45, 78);
    c2.printData();

    int res = cal.sumofReal(c1, c2);
    cout << "The sum of real numbers are: " << res << endl;

    int ref = cal.add(12,23);
    cout << "The result is : " << ref << endl;

    return 0;
}