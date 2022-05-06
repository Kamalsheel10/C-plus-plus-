#include <iostream>
using namespace std;
int main()
{
    cout << "PATTERN 1" << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl
         << "PATTERN 2" << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl
         << "PATTERN 3" << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout<<endl<<"PATTERN 4"<<endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
                cout<<j;
        }
        cout<<endl;
    }
    
    cout<<endl<<"PATTERN 4"<<endl;
    for (int i = 1; i <= 9; i++)
    {
        
            
    }
    

    return 0;
}