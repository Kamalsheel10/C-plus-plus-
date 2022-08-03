#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "The number is not a prime number\n";
            break;
        }
    }
    if (i == n)
    {
        cout << "The number is a prime number\n";
    }

    return 0;
}