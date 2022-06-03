#include <iostream>
using namespace std;
class result
{
private:
    int a, b;

public:
    result()
    {
        a = 0;
        b = 0;
    }
    result(int x, int y)
    {
        a = x;
        b = y;
    }
    result(result &obj1){
        a=obj1.a;
        b=obj1.b;
        cout<<"Copy constructor is called"<<endl;
    }
    void display()
    {
        cout << "The value of a is " << a << " and the value of b is " << b << endl;
    }
};
int main()
{
    result a,b(50,70),c(b);
    a.display();
    b.display();
    c.display();
    return 0;
}