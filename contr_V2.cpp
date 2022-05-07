#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex();
    Complex(int,int);
    void display(){
        cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex::Complex(){
    a=10;
    b=20;
}
Complex::Complex(int x,int y){
    a=x;
    b=y;
}
int main()
{
    Complex o1;
    Complex o2(100,300);
    o1.display();
    o2.display();

    return 0;
}