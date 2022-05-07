#include <iostream>
using namespace std;
class Y;
class X
{
    int a;

public:
    void setData(int x)
    {
        a = x;
    }
    void displayData()
    {
        cout << "The value of a is: " << a << endl;
    }
    friend void exchange(X &, Y &);
};
class Y
{
    int b;

public:
    void setData(int x)
    {
        b = x;
    }
    void displayData()
    {
        cout << "The value of b is: " << b << endl;
    }
    friend void exchange(X &, Y &);
};
void exchange(X &o1, Y &o2)
{
    int temp;
    temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}

int main()
{
    X num1;
    Y num2;
    cout << "BEFORE EXCHANGING THE VALUE:" << endl;
    num1.setData(69);
    num1.displayData();

    num2.setData(96);
    num2.displayData();

    exchange(num1,num2);
    cout<<"AFTER EXCHANGING THE VALUE:"<<endl;
    num1.displayData();
    num2.displayData();

    return 0;
}