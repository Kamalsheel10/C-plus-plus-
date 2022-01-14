#include <iostream>
using namespace std;

int main()
{
    cout << "Following are the marks obtained in C++ exam" << endl;
    int marks[5];
    marks[0] = 61;
    marks[1] = 49;
    marks[2] = 86;
    marks[3] = 24;
    marks[4] = 90;
    // One of the ways to print the value of array
    cout << "The marks at marks[0] is : " << marks[0] << endl;
    cout << "The marks at marks[1] is : " << marks[1] << endl;
    cout << "The marks at marks[2] is : " << marks[2] << endl;
    cout << "The marks at marks[3] is : " << marks[3] << endl;
    cout << "The marks at marks[4] is : " << marks[4] << endl;
    // Printing the values of array by using for loop
    cout << "BY USING FOR LOOP" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "The marks at marks[" << i << "] is : " << marks[i] << endl;
    }
    // Printing the values of array by using while loop
    cout << "BY USING WHILE LOOP" << endl;
    int a = 0, b = 0;
    while (a < 5)
    {
        cout << "The marks at marks[" << a << "] is : " << marks[a] << endl;
        a++;
    }
    // Printing the values of array by using  do while loop
    cout << "BY USING DO WHILE LOOP" << endl;
    do
    {
        cout << "The marks at marks[" << b << "] is : " << marks[b] << endl;
        b++;
    } while (b < 5);
    cout << "\nQuiz Completed" << endl;
    cout<<"\n";

    // Pointers and Arrays
    int *e = marks;
    cout << e << endl;        // This prints the address of marks array
    cout << *(e) << endl;     // This prints the value stored at marks[0]
    cout << *(e + 1) << endl; // This prints the value stored at marks[1]
    cout << *(e + 2) << endl; // This prints the value stored at marks[2]
    cout << *(e + 3) << endl; // This prints the value stored at marks[3]
    cout << *(e + 4) << endl; // This prints the value stored at marks[4]

    return 0;
}