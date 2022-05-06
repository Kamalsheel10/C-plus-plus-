#include <iostream>
#include <iomanip>
using namespace std;
class Bank
{
    int principal;
    int time;
    float rate;
    float returnvalue;

public:
    Bank() {}
    Bank(int a, int b, float c);
    Bank(int a, int b, int c);
    void show();
};
Bank :: Bank(int a, int b, float c)
{
    principal = a;
    time = b;
    rate = c;
    returnvalue = principal;
    for (int i = 0; i < time; i++)
    {
        returnvalue *= 1 + rate;
    }
}
Bank :: Bank(int a, int b, int c){
    principal =a;
    time=b;
    rate=float(c)/100;
    returnvalue=principal;
    for (int i = 0; i < time; i++)
    {
        returnvalue *= 1+rate;
    }
    

}
void Bank ::show()
{
    cout << "The principal amount was " << principal << " and after " << time << " years your amount has increased to " << returnvalue << endl;
}

int main()
{
    Bank b1,b2;
    int p, t;
    float l;
    cout << "Enter principal, time, rate" << endl;
    cin >> p >> t >> l;
    b1 = Bank(p, t, l);
    b1.show();

    cout<<"Enter rate in percentage"<<endl;
    int ra;
    cin>>ra;
    b2=Bank(p,t,ra);
    b2.show();
    return 0;
}