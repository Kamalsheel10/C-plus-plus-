#include <iostream>
#include <iomanip>
using namespace std;
int count = 0;
class Num
{
public:
    Num()
    {
        count++;
        cout << "This is the time when my constructor is called " << count << endl;
    }
    ~Num()
    {
        cout << "This is the time when my destructior is called " << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside the main function" << endl;
    cout << "Creating an object called ob1" << endl;
    Num ob1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects!" << endl;
        Num ob2, ob3;
        cout << "Exiting this block of code" << endl;
    }
    cout << "Back to the main" << endl;
    {
        int x = 12;
        cout << "The value of x is: " << x << endl;
    }
    //     cout<<"The value of x is: "<<x<<endl;
    // The above block of code was written for me to understand about the scope of the variable.
    // So, x only exists inside the block above.
    return 0;
}