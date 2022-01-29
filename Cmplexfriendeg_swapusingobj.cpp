#include <iostream>
using namespace std;
class Num2;
class Num1
{
    int a;
    friend void exchange(Num1 &, Num2 &);

public:
    void setvalue1(int n1)
    {
        a = n1;
    }
    void display1()
    {
        cout << "The value of first number is " << a << endl;
    }
};
class Num2
{
    int b;
    friend void exchange(Num1 &, Num2 &);

public:
    void setvalue2(int n2)
    {
        b = n2;
    }
    void display2()
    {
        cout << "The value of second number is " << b << endl;
    }
};
void exchange(Num1 &x, Num2 &y)
{
    int temp;
    temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main()
{
    int n, p;
    cout << "Enter the first number" << endl;
    cin >> n;
    cout << "Enter the second number" << endl;
    cin >> p;
    cout << "\nBEFORE SWAPPING: " << endl;
    Num1 c1;
    c1.setvalue1(n);
    c1.display1();
    Num2 c2;
    c2.setvalue2(p);
    c2.display2();

    exchange(c1, c2);
    cout << "\nAFTER SWAPPING: " << endl;
    c1.display1();
    c2.display2();
    return 0;
}