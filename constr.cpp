#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(void);
    void display()
    {
        cout << "Your sum is " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex(void)
{
    a - 23;
    b = 34;
    // cout<<"Hello World!"<<endl;
}

int main()
{
    Complex b2, c1, a1;
    b2.display();
    c1.display();
    a1.display();

    return 0;
}