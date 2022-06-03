#include <iostream>
using namespace std;
// class A
// {
//     int a, b;

// public:
//     A(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void display()
//     {
//         cout<<"The value of a is: "<<a<<endl;
//         cout<<"The value of b is: "<<b<<endl;
//     }
//     A operator +(A obj1){
//         A tem(0,0);
//         tem.a=a*obj1.a;
//         tem.b=b*obj1.b;
//     }
// };
class A
{
    int a, b;

public:
    A(int x)
    {
        a = x;
    }
    void display()
    {
        cout<<"The value of a is: "<<a<<endl;
    }
    A operator +(A obj1){
        A tem(0);
        tem.a=a+obj1.a;
    }
};
int main (){
    A ob(1),ob2(0);
    ob2=ob+1;
    ob2.display();
    return 0;
}