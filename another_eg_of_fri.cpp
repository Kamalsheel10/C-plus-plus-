#include <iostream>
using namespace std;
class Complex
{
    int a, b;
    // I have made two private members
public:
    void setData(int x, int y)
    // This function is used to assign the value of a and b for two objects:
    //  1. Object c1
    //  2. Object c2
    {
        a = x;
        b = y;
    }
    void printData()
    {
        cout << "The complex number is: " << a << " +" << b << "i" << endl;
        // This block simply displays the numbers in the form of complex number
    }
    void real_sum(Complex o1, Complex o2)
    // This function is very important to understand.
    // I have passed two objects of the class Complex as Argument i.e o1 and o2
    // In the main function, I have created two object of Complex i.e c1 and c2
    // The first argument i.e o1 gets the value passed from the object c1
    // The second argument i.e o2 gets the value passed from the object c2
    {
        int sum;
        sum = o1.a + o2.a;
        // o1 and o2 get 2 numbers each, where the first numbers are real number and the second numbers are imaginary number
        // The above line will only sum the real part i.e the first part.

        cout << "The sum of real part is: " << sum << endl;
    }
    void imaginary_sum(Complex o1, Complex o2)
    {
        int sum;
        sum = o1.b + o2.b;
        // The above line will only sum the imaginary part i.e the first part.
        cout << "The sum of imaginary part of the numbers are: " << sum << "i" << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setData(56, 78);
    c1.printData();

    c2.setData(123, 453);
    c2.printData();

    c3.real_sum(c1, c2);
    c3.imaginary_sum(c1, c2);
    return 0;
}