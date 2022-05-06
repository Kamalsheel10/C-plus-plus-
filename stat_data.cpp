#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
    // In the above line, I have declared static variable or static data member.s
public:
    void getdata()
    {
        cout << "Enter the id of the employee" << endl;
        cin >> id;
        count++;
    }
    void setdata()
    {
        cout << "The id of the employee is: " << id << " and the number of employee is: " << count << endl;
    }
    // Below I have created static function.
    static void getcount()
    {
        // It can only print static variable, if i try to print any other thing then it will show me an error.
        cout << "The value of count is: " << count << endl;
    }
};
int Employee::count = 1000;
// This line has to be coded in order to make a static data member and we can initiliaze it with 1000 as shown above. It's default value is 0.
int main()
{
    Employee Ram, Hari;
    // Static data member is shared with all the objects of the class as shown below.
    Ram.getdata();
    Ram.setdata();
    // The below code is used to display static function.
    Employee::getcount();

    Hari.getdata();
    Hari.setdata();
    Employee::getcount();
    return 0;
}