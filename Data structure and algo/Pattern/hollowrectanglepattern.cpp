#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the row and column: \n";
    cin >> row >> col;
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            if (i == 0 || j == 0 || i == row || j == col)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}