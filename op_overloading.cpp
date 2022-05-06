#include <iostream>
using namespace std;
class ob{
    int a,b; 
    public:
    ob(int x, int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"A= "<<a<<" B= "<<b<<endl;
    }
    void operator -(){
        a=-a;
        b=-b; 
    }
};
int main(){
    ob cal(2,-3);
    cal.display();
    -cal;
    cal.display();
    return 0;
}