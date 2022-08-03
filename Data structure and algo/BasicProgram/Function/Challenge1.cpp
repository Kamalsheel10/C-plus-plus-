// PRINT ALL PRIME NUMBERS BETWEEN TWO GIVEN NUMBERS
#include <iostream>
using namespace std;
void prime_num(int, int);
int main()
{
    int x, y;
    cout << "Enter the range:\n";
    cin >> x >> y;
    prime_num(x, y);
    return 0;
}
void prime_num(int a, int b)
{
    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << endl;
        }
    }
}