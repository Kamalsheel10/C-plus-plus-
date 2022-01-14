#include <iostream>
using namespace std;
int facto(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return a * facto(a - 1);
    }
}
int main()
{
    int num;
    cout << "Enter the number to know it's factorial" << endl;
    cin >> num;
    cout << "The factorial of the number " << num << " is " << facto(num) << endl;

    return 0;
}