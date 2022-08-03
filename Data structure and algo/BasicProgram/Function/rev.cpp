#include <bits/stdc++.h>
using namespace std;
int hex_to_bin(string in)
{
    int ans = 0;
    int x = 1;
    int size = in.size();
    for (int i = size - 1; i >= 0; i--)
    {
        if (in[i] >= '0' && in[i] <= '9')
        {
            ans += x * (in[i] - '0');
        }
        else if (in[i] >= 'A' && in[i] <= 'F')
        {
            ans += x * (in[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}
bool check(int a, int b, int c)
{
    int x = max(a, max(b, c));
    int y, z;
    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = a;
        z = b;
    }
    if (pow(x, 2) == pow(y, 2) + pow(z, 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << hex_to_bin(n) << endl;

    int x, y, z;
    cout << "Enter the respective values: \n";
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "Pythagorean triplet";
    }
    else
    {
        cout << "Not a Pythagorean triplet";
    }

    return 0;
}