#include <iostream>
using namespace std;
class cal
{
protected:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    int sum()
    {
        return a + b;
    }
    friend class cal2;
};
class cal2
{
    protected:
    int c,d;
public:
 void setData1(int x, int y)
    {
        c = x;
        d = y;
    }
    int mult()
    {
        return c * d;
    }
};
class HybridCal : public cal, public cal2
{
public:
    void display()
    {
        cout << "The addition of two numbers are: " << sum() << endl;
        cout << "The multiplication of two numbers are: " << mult() << endl;
    }
};
int main()
{
    HybridCal C1;
    C1.setData(10, 20);
    C1.setData1(12, 12);
    C1.sum();
    C1.mult();
    C1.display();
    return 0;
}