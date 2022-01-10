#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    //************* FIRST REVISION ***********************
    // int a=10,b;
    // cout<<"This is a program to add two numbers whose values are already assigned\n";
    // cout<<"Enter the value of b\n";
    // cin>>b;
    // cout<<"The value of b is "<<b;
    // cout<<"\nThe value of a is "<<a;
    // cout<<"\nThe sum of two numbers is "<<a+b;

    int e=56.8723;
    cout<<"The value of e is: "<<e<<endl;
    cout<<"The value of e is: "<<(float)e<<endl;
    cout<<"The value of e is: "<<float(e)<<endl;
    cout<<"The value of e without setw is: "<<e<<endl;
    cout<<"The value of e with setw is: "<<setw(4)<<e<<endl;
    cout<<"The value of e with setw is: "<<setw(2)<<e<<endl;
    return 0;
}