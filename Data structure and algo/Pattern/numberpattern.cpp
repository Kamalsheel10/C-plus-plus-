#include <iostream>
using namespace std;
int main()
{
    // This is how I solved the problem
    int row, col;
    cout << "Enter the value of row and column: \n";
    cin >> row >> col;
    int num = 1;
    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j >= i)
            {
                cout << " " << num;
                num++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        num = 1;
    }

    // Another method

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        // j <= n - 1 prints the space for eg: 1 <= 5 - 1 --> 1 <= 4 .
        // In the above example in the first row 4 column are printed as space and like wise.
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}