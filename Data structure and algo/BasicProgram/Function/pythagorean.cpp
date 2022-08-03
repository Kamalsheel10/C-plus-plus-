#include <iostream>
#include <math.h>
using namespace std;
bool check(int, int, int);
int main()
{
    int x, y, z;
    cout << "Enter the values:\n";
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "Pythagorean Triplet\n";
    }
    else
    {
        cout << "Not a Pythagorean Triplet\n";
    }
    return 0;
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
    if (pow(x,2) == pow(y,2) + pow(z,2))
    {
        return true;
    }
    else
    {
        return false;
    }
}