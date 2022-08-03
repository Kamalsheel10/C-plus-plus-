#include <iostream>
using namespace std;
int facto(int num)
{
    int fanc = 1;
    for (int i = 1; i <= num; i++)
    {
        fanc *= i;
    }
    return fanc;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << facto(i) / (facto(j) * facto(i - j)) << " ";
        }
        cout << endl;
    }

    return 0;
}