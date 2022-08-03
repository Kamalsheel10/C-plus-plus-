#include <iostream>
using namespace std;
int facto(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << "The factorial of the number " << n << " is: " << factorial;
    return 0;
}
int main()
{
    int num;
    cout << "Finding out factorial for the number: ";
    cin >> num;
    facto(num);
    return 0;
}