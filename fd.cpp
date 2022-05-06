#include <iostream>
using namespace std;
class cal{
    int a,b; 
    public:
    void assssign(int x, int y){
        a=x;
        b=y;
    }
    friend void sum(cal ak);
    friend void mul(cal mul);
};
void sum(cal ak){
    int sum=ak.a+ak.b;
    cout<<sum<<endl;
}
void mul(cal mul){
    int mult=mul.a*mul.b;
    cout<<mult;
}
int main(){
    cal ob1,ob2;
    ob1.assssign(10,20);
    sum(ob1);
    ob2.assssign(12,12);
    mul(ob2);
    return 0;
}
