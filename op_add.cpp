#include <iostream>
using namespace std;
class cal{
    int a,b; 
    public:
    cal(){
        a=0;
        b=0;
    }
    cal(int x, int y){
        a=x;
        b=y;
    }
    cal operator +(cal add){
        cal temp;
        temp.a=a+add.a;
        temp.b=b+add.b;
        return temp;
    }
    void display(){
        cout<<"A= "<<a<<" B= "<<b<<endl;
    }
};

class sig{
    int c,d;
    public:
    sig(int n1, int n2){
        c=n1;
        d=n2;
    }
    void operator -(){
        c=-c; 
        d=-d;
    }
    void display1(){
        cout<<"C= "<<c<<" D= "<<d<<endl;

    }
};
int main(){
    cal t1,t2,t3;
    t1=cal(10,20);
    t2=cal(30,40);
    t3=t1+t2;
    t1.display();
    t2.display();
    t3.display();
    sig tg(3,4);
    -tg;
    tg.display1();
    return 0;
}