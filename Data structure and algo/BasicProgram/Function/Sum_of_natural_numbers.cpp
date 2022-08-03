#include <iostream>
using namespace std;
int sum(int n)
{
    int add=0;
    for (int i = 1; i <= n; i++)
    {
        add+=i;
    }
    cout<<"The sum of first "<<n<<" numbers are: "<<add<<endl;
    return add;
}
int main()
{
    int num;
    cout<<"Enter the natural numbers: ";
    cin>>num;
    sum(num);
    return 0;
}