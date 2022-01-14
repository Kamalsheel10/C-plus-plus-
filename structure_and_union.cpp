#include <iostream>
using namespace std;
struct students
{
    int id;
    char favchar;
    int grade;
};
typedef struct employee
{
    int id;
    int salary;
} tp;
union classes
{
    int id;
    int salary;
    char favchar;
    double idd;
};

int main()
{
    // One way to initialize and display structure
    struct students ram;
    ram.id = 1;
    ram.grade = 12;
    ram.favchar = 'K';
    cout << "The id of Ram is " << ram.id << endl;
    cout << "The grade of Ram is " << ram.grade << endl;
    cout << "The favourite character of Ram is " << ram.favchar << endl;

    // Another way to initialize and display the structure
    tp hari;
    hari.id - 122;
    hari.salary = 233333;
    cout << "\nThe id of employee is " << hari.id << endl;
    cout << "The salary of employee is " << hari.salary << endl;

    // Union
    union classes sam;
    sam.salary = 1222222;
    sam.idd = 234.4565;
    sam.id = 12; // This is shown as output as it is assigned atlast.
    cout << "\nThe salary of Sam is " << sam.salary << endl;
    cout << "The idd of Sam is " << sam.idd << endl;
    cout << "The id of Sam is " << sam.id << endl;

    return 0;
}