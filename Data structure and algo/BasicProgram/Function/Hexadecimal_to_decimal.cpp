#include <bits/stdc++.h>
using namespace std;
int hexadecimal_to_decimal(string);
int main()
{
    string a;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << hexadecimal_to_decimal(a);
    return 0;
}
int hexadecimal_to_decimal(string n)
{
    int ans = 0;
    int x = 1;
    int size = n.size();
    for (int i = size - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}