#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;

public:
    void getdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void display()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    // int c, d;
    // cout << "Enter the values for a and b" << endl;
    // cin >> c;
    // cin >> d;
    // cout << "The values are " << c << " and " << d << endl;
    // c1.getdata(c, d);
    c1.getdata(5, 9);
    c1.display();

    c2.getdata(1, 2);
    c2.display();
    
    c3.getdatabysum(c1,c2);
    c3.display();
    return 0;
}

