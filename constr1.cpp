#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void display(){
        cout<<"The point is ("<<a<<", "<<b<<")"<<endl;
    }
};
int main()
{
    Complex c1(2,4);
    c1.display(); 
    Complex c2(2232,423);
    c2.display(); 
    Complex c3(5,42);
    c3.display();

    return 0;
}