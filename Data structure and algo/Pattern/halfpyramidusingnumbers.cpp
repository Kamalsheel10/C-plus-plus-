#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "Enter the row and column: " << endl;
    cin >> row >> column;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (i >= j)
            {
                cout << " " << i;
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