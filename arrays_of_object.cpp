#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 1222;
        cout << "Enter your id" << endl;
        cin >> id;
    }
    void displayid()
    {
        cout << "The id of the employee is " << id << endl;
    }
};
int main()
{
    int num;
    cout<<"How many employees do you have?"<<endl;
    cin>>num;
    Employee ksm[num];
    for (int i = 0; i < num; i++)
    {
        ksm[i].setid();
        ksm[i].displayid();
    }

    return 0;
}