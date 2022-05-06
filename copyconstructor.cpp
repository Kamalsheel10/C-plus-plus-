#include <iostream>
using namespace std;
class siu
{
    int a;

public:
    siu(int a1)
    {
        a = a1;
    }
    void dis()
    {
        cout << a << endl;
    }
    siu(siu &fk){
        cout<<"Copy constructor has been called"<<endl;
        a=fk.a;
    }
};

int main()
{
    siu ek(12);
    ek.dis();
    siu ek1 = ek;
    ek1.dis();
    return 0;
}