#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    void getData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDatabySum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNum(){
        cout<<"Your complex number is: "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main()
{
    Complex n1,n2,n3;
    n1.getData(1,2);
    n1.printNum();
    n2.getData(3,4);
    n2.printNum();
    n3.setDatabySum(n1,n2);
    n3.printNum();
    return 0;
}