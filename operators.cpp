#include <iostream>
using namespace std;
int main(){
    int a=18,b=2;
    cout<<"This is a prograam to try operators"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<++a<<".By using ++a"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<a++<<".By using a++"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"Increment operators and decrement operators work in the same way."<<endl;
    cout<<"Trying logical operators"<<endl;
    cout<<"By using AND operator, Is a greater than b and greater than 5?\t"<<((a>b)&&(a>5))<<endl;
    cout<<"1 means yes and 0 means no"<<endl;
    cout<<"By using OR operator, Is a greater than b and greater than 5?\t"<<((a>b)||(a>5))<<endl;
    cout<<"OR operator gives 1 if any one of the condition is true"<<endl;
    cout<<"By using NOT operator, Is a greater than b?\t"<<(!(a>b))<<endl;
    cout<<"Logical NOT operator gives 0 if the answer is 1"<<endl;
    
    return 0;
}