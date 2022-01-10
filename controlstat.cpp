#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    //******* USING IF ELSE IF STATEMENT**********

    if (age > 18)
    {
        cout << "You are invited to my party" << endl;
    }
    else if (age == 18)
    {
        cout << "You are a kid and you will get a kid pass" << endl;
    }
    else
    {
        cout << "You are not invited to my party" << endl;
    }
    cout << "Program written by if else if ladder has been completed" << endl;

    //******* USING SWITCH CASE STATEMENT**********

    switch (age)
    {
    case 18:
        cout << "You are eligible for driving exam" << endl;
        break;
    case 1:
        cout << "You are not eligible for driving exam" << endl;
        break;
    default:
        cout << "Enter 1 or 18 to get output" << endl;
        break;
    }
    cout << "Program written by switch case has been completed" << endl;
    return 0;
}