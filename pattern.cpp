#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "*";
        
        if (i == 1)
        {
            for (int j = 1; j < 31; j++)
            {
                cout << "*";
            }
        }
        for (int j = 1; j < 29; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;

        if (i > 9)
        {
            for (int j = 1; j < 31; j++)
            {
                cout << "*";
            }
        }
    }

    return 0;
}