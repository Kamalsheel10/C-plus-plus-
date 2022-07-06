#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the value of row and column: " << endl;
    cin >> row >> col;
    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j <= i)
            {
                cout <<" "<< j;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}