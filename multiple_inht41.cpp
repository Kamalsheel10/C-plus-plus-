#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1init;

public:
    void set_base1int(int a)
    {
        base1init = a;
    }
};
class Base2
{
protected:
    int base2init;

public:
    void set_base2init(int a)
    {
        base2init = a;
    }
};
class Derived : public Base1, public Base2
{
public:
    void display()
    {
        cout << "The value of Base1 is: " << base1init << endl;
        cout << "The value of Base2 is: " << base2init << endl;
        cout << "The sum of Base1 and Base2 is: " << base1init + base2init << endl;
    }
};
int main()
{
    Derived D1;
    D1.set_base1int(10);
    D1.set_base2init(20);
    D1.display();

    return 0;
}