#include <iostream>
#include <iomanip>
using namespace std;
class Complex
{
private:
    int a, b;
    friend Complex addnum(Complex O1, Complex O2);

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void displaySum()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex addnum(Complex O1, Complex O2)
{
    Complex O3;
    O3.setNum((O1.a + O2.a), (O1.b + O2.b));
    return O3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNum(12, 23);
    c1.displaySum();

    c2.setNum(9, 6);
    c2.displaySum();

    sum=addnum(c1,c2);
    sum.displaySum();
    return 0;
}