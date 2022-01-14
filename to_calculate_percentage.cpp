#include <iostream>
using namespace std;
int main()
{
    // cout<<"Hello world!"<<endl;
    int a, b, c, d, e, sum;
    float per;
    cout << "Enter your marks in Physics" << endl;
    cin >> a;
    cout << "Your marks is " << a << endl;
    cout << "Enter your marks in Introduction to Information Technology" << endl;
    cin >> b;
    cout << "Your marks is " << b << endl;
    cout << "Enter your marks in digital logic" << endl;
    cin >> c;
    cout << "Your marks is " << c << endl;
    cout << "Enter your marks in C prgoramming" << endl;
    cin >> d;
    cout << "Your marks is " << d << endl;
    cout << "Enter your marks in Maths" << endl;
    cin >> e;
    cout << "Your marks is " << e << endl;
    sum = a + b + c + d + e;
    cout << "\nTotal marks is " << sum << endl;
    per = (float)sum / 5;
    cout << "Your percentage is " << per << endl;
    return 0;
}