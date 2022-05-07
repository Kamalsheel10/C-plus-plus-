#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};
void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number()
{
    cout << "The roll number of the student is: " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float science;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    science = m2;
}
void Exam::get_marks()
{
    cout << "The marks obtianed in Maths is: " << maths << endl;
    cout << "The marks obtianed in Science is: " << science << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "The percentage obtained is: " << (science + maths) / 2 << "%" << endl;
    }
};
int main()
{
    Result Ram;
    Ram.set_roll_number(211804);
    Ram.set_marks(93.32, 89.4534);
    Ram.display();
    return 0;
}