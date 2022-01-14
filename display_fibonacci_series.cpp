#include <iostream>
using namespace std;
void display(int n)
{
    int a = 0, b = 1, c;
    int i = 0;
    while (i < n)
    {
        cout << a << "\t";
        c = a + b;
        a = b;
        b = c;
        i++;
    }
}

int main()
{
    int num;
    cout << "Enter any number" << endl;
    cin >> num;
    display(num);
    return 0;
}