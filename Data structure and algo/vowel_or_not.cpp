#include <iostream>
using namespace std;
int main()
{
    char c;
    int islowervalue, iscaptialvalue;
    cout << "Enter any character\n";
    cin >> c;
    islowervalue = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    iscaptialvalue = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    cout<<"The value is: "<<islowervalue<<endl;
    cout<<"The value is: "<<iscaptialvalue<<endl;
    if (islowervalue || iscaptialvalue)
    {
        cout << "The character is vowel my guy\n";
    }
    else
    {
        cout << "The character is not vowel my guy\n";
    }
    return 0;
}