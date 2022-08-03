#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    int reverse = 0;
    while (n > 0)
    {
        int last_digit;
        last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n=n/10;
    }
    cout<<"The reverse of the entered number is: "<<reverse<<endl;
    return 0;
}