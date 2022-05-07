#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number() {}
    Number(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "The value of the a is: " << a << endl;
    }
    Number(Number &obj1)
    {
        a = obj1.a;
        cout << "The value after using copy constructor is: " << obj1.a << endl;
    }
};
int main()
{
    Number num1(34);
    Number num2 = num1;
    
    return 0;
}