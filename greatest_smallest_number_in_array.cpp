#include <iostream>
using namespace std;
class Number
{
    int num[10];
    int lo;
    int sm;

public:
    Number()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "Enter the value of number" << endl;
            cin >> num[i];
        }
    }
    void largest()
    {
        int max = num[0];
        for (int i = 1; i < 10; i++)
        {
            if (num[i] > max)
            {
                max = num[i];
            }
        }
        lo=max;
    }
    void display_largest(){
        cout<<lo;
    }
    void smallest_num(){
        int small=num[0];
        for (int i = 1; i < 10; i++)
        {
            if(num[i]>small){
                
            }
            else{
                small=num[i];
            }
        }
        cout<<endl;
        sm=small;
    }
    void display_smallest(){
        cout<<sm;
    }
};
int main()
{
    Number n1;
    n1.largest();
    n1.display_largest();
    n1.display_largest();
    n1.smallest_num();
    n1.display_smallest();

    return 0;
}