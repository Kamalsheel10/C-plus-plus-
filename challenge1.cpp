#include <iostream>
using namespace std;
int main()
{
    int num, i = 1;
    cout << "Enter the number for multiplication table" << endl;
    cin >> num;
    cout << "Multuplication table of " << num << endl;
    //******* USING WHILE LOOP ********
    while (i <= 10)
    {
        cout << num << "X" << i << "=" << num * i << endl;
        i++;
    }

    // //******* USING DO WHILE LOOP ********
    do
    {
        cout << num << "X" << i << "=" << num * i << endl;
        i++;
    } while (i <= 10);

    //******* USING for LOOP ********
    for (int j = 0; j < 10; j++)
    {
        cout << num << "X" << i << "=" << num * i << endl;
        i++;
    }

    return 0;
}