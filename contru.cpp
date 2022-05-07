#include <iostream>
using namespace std;
class A
{
    int marks, total;

public:
    A()
    // Defeault Constructor
    {
        marks = 100;
        cout << marks;
    }
    A(int x, int y)
    // Parameterized Constructor
    {
        marks = x;
        total = y;
    }
    A(A &cop)
    {
        // Copy Constructor
        marks = cop.marks;
        total = cop.total;
    }
    void display()
    {
        cout << "The value of marks is: " << marks << " and the value of total is: " << total << endl;
    }
};

int main()
{
    A ob1(30, 43);
    // Initializing the Parameterized constructor
    A ob2 = ob1;
    // Initializing the Copy constructor
    ob1.display();
    ob2.display();

    return 0;
}