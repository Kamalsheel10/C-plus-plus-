#include <iostream>
using namespace std;
int main()
{
    int op1,op2;
    cout<<"Enter two numbers:\n";
    cin>>op1>>op2;
    char operation;
    cout<<"Enter the operation: ";
    cin>>operation;
    switch(operation)
    {
        case '+':
        cout<<"The addition of two numbers is: "<<op1+op2<<endl;
        break;
        case '-':
        cout<<"The substraction of two numbers is: "<<op1-op2<<endl;
        break;
        case '*':
        cout<<"The multiplicatoin of two numbers is: "<<op1*op2<<endl;
        break;
        default:
        cout<<"Error 404: Operation not found, try again!"<<endl;

    }
    return 0;
}