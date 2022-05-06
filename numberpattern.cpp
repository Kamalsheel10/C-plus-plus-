#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<"THIS IS PATTERN 1"<<endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
                if(i>=j){
                    cout<<i;
                }
                else{
                    cout<<" ";
                }
        }
        cout<<endl;
    }

    cout<<"\nTHIS IS NUMBER PATTERN 2"<<endl;
    int count=1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
                if(i>=j){
                    cout<<count;
                    count++;
                }
                else{
                    cout<<" ";
                }
        }
        cout<<endl;
    }
    
    
    return 0;
}