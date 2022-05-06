#include <iostream>
using namespace std;
class Num
{
private:
    int a, b;
    friend class Swap ;//(Num&,Num&);

public:
    Num(int n1)
    {
        a = n1;
    }
    void show()
    {
        cout << "The value of first number is " << a << endl;
        //cout << "The value of second number is " << b << endl;
    }
};
class Num1{
    private:
    friend class Swap;
    int b;
    public:
    Num1(int n2){
        b=n2;
    }
    void show1(){
        cout<<"The value of second number is "<<b<<endl;
    }
};
class Swap
{
public:
    void sww(Num &x, Num1 &y)
    {
        int temp;
        temp = x.a;
        x.a = y.b;
        y.b = temp;
    }
};
int main()
{
    int n1, n2;
    Swap fg;
    cout << "Enter First and Second numbers" << endl;
    cin >> n1 >> n2;
    cout << "BEFORE SWAPP" << endl;
    Num fi(n1);
    Num1 fik(n2);
    fi.show();
    fik.show1();
    fg.sww(fi,fik);
    cout<<"\nAFTER SWAPP"<<endl;
    fi.show();
    fik.show1();

    return 0;
}