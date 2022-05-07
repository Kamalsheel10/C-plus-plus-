#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    void setData()
    {
        cout << "Enter the value of a and b: " << endl;
        cin >> a >> b;
    }
    friend class B;
};
class B
{
    int c, e;

public:
    void multiply(A o1, A o2)
    {
        c = o1.a * o2.a;
    }
    void printData()
    {
        cout << "The multiplication of two numbers are: " << c << endl;
        // cout << "The multiplication of two numbers are: " << e << endl;
    }
};
int main()
{
    A num1,num3;
    B num2;
    num1.setData();
    num3.setData();
    num2.multiply(num1,num3);
    num2.printData();
}