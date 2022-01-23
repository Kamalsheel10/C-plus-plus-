#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setValue(int a1, int b1, int c1);
    void displayvalue()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void Employee ::setValue(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
class Student
{
private:
    int roll_no, total_marks;

public:
    string name;
    void setData(int n, int m);
    void displayData()
    {
        cout << "\nThe name of the student is " << name << endl;
        cout << "The roll number of the student " << name << " is " << roll_no << endl;
        cout << "The total marks of the student " << name << " is " << total_marks << endl;
    }
};
void Student ::setData(int n, int m)
{
    roll_no = n;
    total_marks = m;
}
int main()
{
    Employee Ram;
    Ram.d = 89;
    Ram.e = 91;
    Ram.setValue(3, 7, 11);
    Ram.displayvalue();

    Student Hari;
    Hari.name = "Hari";
    Hari.setData(211804, 500);
    Hari.displayData();

    return 0;
}