#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout<<"Enter the row and column: \n";
    cin>>row>>col;
    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= col; j++)
        {
            if(i>=j)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}