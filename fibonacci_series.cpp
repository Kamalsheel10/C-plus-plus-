#include <iostream>
using namespace std;
int fibon(int v)
{
    if (v == 0)
    {
        return 0;
    }
    else if (v == 1 || v == 2)
    {
        return 1;
    }
    else
    {
        return fibon(v - 2) + fibon(v - 1);
    }
}

int main()
{
    int num;
    cout << "Enter any number" << endl;
    cin >> num;
    cout << "The fibonacci series at the term " << num << " is " << fibon(num) << endl;

    return 0;
}