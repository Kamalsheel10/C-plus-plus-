#include <iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int time;
    float interestRate;
    float returnAmount;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show()
    {
        cout << "The pricipal amount was " << principal << ". Return value after " << time << " years is " << returnAmount << endl;
    };
};
BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    time = y;
    interestRate = y;
    returnAmount = principal;
    for (int i = 0; i < y; i++)
    {
        returnAmount *= (1 + interestRate);
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    time = y;
    interestRate = float(r) / 100;
    returnAmount = principal;
    for (int i = 0; i < y; i++)
    {
        returnAmount *= (1 + interestRate);
    }
}
int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}