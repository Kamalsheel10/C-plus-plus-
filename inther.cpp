#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    int salary;
    Employee(){}
    Employee(int inpid)
    {
        id = inpid;
        salary = 12000;
    }
};
class Programmer : Employee
{
    public:
    Programmer(int no){
        id=no;
    }
    int langugageCode=12;
    void getData(){
        cout<<"The id of the Employee is: "<<id<<endl;
    }
};
int main()
{
    Employee Ram(1), Hari(2);
    cout <<"The salary of the Employee is: "<< Ram.salary << endl;
    cout <<"The salary of the Employee is: "<< Hari.salary << endl;
    Programmer skillF(14);
    cout<<"The no of language is: "<<skillF.langugageCode<<endl;
    skillF.getData();
    return 0;
}