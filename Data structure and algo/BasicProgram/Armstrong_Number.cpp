#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, orginal_num;
    cout << "Enter any number to check if it's an armstrong or not" << endl;
    cin >> num;
    orginal_num = num;
    int sum = 0;
    while (num > 0)
    {
        int lastdigit;
        lastdigit = num % 10;
        sum += pow(lastdigit, 3);
        num = num / 10;
    }
    if (sum == orginal_num)
    {
        cout << "The number is indeed an Armstrong number" << endl;
    }
    else
    {
        cout << "The number is not an Armstrong number" << endl;
    }
    return 0;
}