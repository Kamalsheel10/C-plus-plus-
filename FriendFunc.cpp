#include <iostream>
#include <iomanip>
using namespace std;

// FORWARD DECLERATION
class Complex;

class Calculator
{
public:
    int sum(int a, int b)
    {
        return (a + b);
    }
    int sumOfRealValue(Complex, Complex);
};
class Complex
{
    int a, b;
    friend int Calculator ::sumOfRealValue(Complex o1, Complex o2);

public:
    void setValue(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void displayValue()
    {
        cout << "Your sum is " << a << " + " << b << "i" << endl;
    }
};
int Calculator ::sumOfRealValue(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    Complex o1, o2;

    o1.setValue(5, 6);
    o1.displayValue();

    o2.setValue(15, 16);
    o2.displayValue();

    Calculator k1;

    int res = k1.sumOfRealValue(o1, o2);
    cout << "Their sum is " << res;

    return 0;
}