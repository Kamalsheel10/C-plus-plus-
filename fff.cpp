#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "This is base class display" << endl;
    }
};
class derived: public base
{
public:
    void display()
    {
        cout << "This is derived class display" << endl;
    }
};
int main()
{
   base *ptr;
   derived p;
   ptr=&p;

   ptr ->display();
    return 0;
}