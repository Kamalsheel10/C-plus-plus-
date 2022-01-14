#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    // THIS PROGRAM IS AN EXAMPLE OF CALL BY REFERENCE
    int a = 19, b = 23;
    cout << "BEFORE SWAPPING" << endl;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swap(&a, &b);
    cout << "AFTER SWAPPING" << endl;
    cout << "The value of a is " << a << " and the value of b is " << b;

    return 0;
}