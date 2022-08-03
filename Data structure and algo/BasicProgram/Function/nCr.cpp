#include <iostream>
using namespace std;
int facto(int num)
{
    int fac=1;
    for (int i = 1; i <= num; i++)
    {
        fac*=i;
    }
    return fac;
}
int main()
{
    int n, r;
    cout << "Enter the value of n and r : ";
    cin >> n >> r;
    int ans = facto(n) / (facto(r) * facto(n - r));
    cout<<ans<<endl;
    return 0;
}