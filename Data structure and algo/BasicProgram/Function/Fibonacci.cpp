#include <iostream>
using namespace std;
int fibo(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextvalue;
    for (int i = 0; i < n; i++)
    {
        cout << t1 << "\t";
        nextvalue = t1 + t2;
        t1 = t2;
        t2 = nextvalue;
    }
    return 0;
}
int main()
{
    int num;
    cout << "Enter how many terms do you want? ";
    cin >> num;
    fibo(num);
    return 0;
}