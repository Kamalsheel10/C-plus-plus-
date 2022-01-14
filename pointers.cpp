#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *b = &a;
    cout << "The adrress of a is : " << &a << endl;
    cout << "The adrress of b is : " << b << endl;
    // The address of a and b are same, since b is a pointer which holds the address of variable a.
    // To find out the value at b.
    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << *b << endl;
    // To show the value stored at b we need to use dereference operator (*).

    // Pointer-to-Pointer
    int **c = &b;
    cout << "The address stored at c is : " << c << endl;
    cout << "The value stored at the address of c is : " << *c << endl;
    cout << "The value stored at (the address of the address of C) is : " << **c << endl;


    // OUTPUT
    // The adrress of a is : 0x61feb8
    // The adrress of b is : 0x61feb8
    // The valur of a is : 10
    // The valur of b is : 10
    // The address stored at c is : 0x61feb4
    // The value stored at the address of c is : 0x61feb8
    // The value stored at (the address of the address of C) is : 10

    return 0;
}