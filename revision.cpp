#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;
    static int count;

public:
    void getId()
    {
        count++;
        salary = 122;
        cout << "Enter the id of the employee" << endl;
        cin >> id;
    }
    void setId()
    {
        cout << "The id of the employee is: " << id << " and the employee no is: " << count << endl;
    }
};
int Employee::count;
int main()
{
    Employee steel[5];
    for (int i = 0; i < 5; i++)
    {
        steel[i].getId();
        steel[i].setId();
    }

    return 0;
}