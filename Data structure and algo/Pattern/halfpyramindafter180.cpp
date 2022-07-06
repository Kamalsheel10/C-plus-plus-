#include <iostream>
using namespace std;
int main()
{
    // I have solved it by myself
    int row, col;
    cout << "Enter row and column: \n";
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = col; j >= 1; j--)
        {
            if (i >= j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Another method
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}