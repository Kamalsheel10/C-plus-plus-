#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 10; j >= i; j--)
        {
            if (i == j)
            {
                cout << '*' << endl;
                break;
            }
            else
            {
                cout << " ";
            }
        }
    }
    cout << "THE ABOVE PROGRAM WAS FOR LEFT DIAGONAL" << endl;
    cout<<endl;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
                if(i==j){
                    cout<<'*'<<endl;
                    break;

                }
                else{
                    cout<<" ";
                }
        }
        
    }
    cout << "THE ABOVE PROGRAM WAS FOR RIGHT DIAGONAL" << endl;
    

    return 0;
}