#include <iostream>
using namespace std;
class Base
{
    int a, b;

public:
    void getData(int x, int y)
    {
        a = x;
        b = y;
    }
    void displayData()
    {
        cout << "The values of a = " << a << " and  b = " << b << endl;
    }
};
class Dervie : public Base
{
    int m, n;

public:
void getVal(int n1, int n2)
{
    m=n1;
    n=n2;
}
 void displayValue()
    {
        cout << "The values of m = " << m << " and  n = " << n << endl;
    }
};
int main()
{
    Base ob1;
    Dervie ob2;
    //ob1.getData(12,23);
    ob1.getData(12,23);
    ob1.displayData();

    ob2.getVal(69,96);
    ob2.displayValue(); 
    return 0;
}