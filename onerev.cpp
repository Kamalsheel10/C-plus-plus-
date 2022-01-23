#include <iostream>
#include <string>
using namespace std;
class binary
{
    private:
    string str;
    public:
    void read();
    void chk();
    void display_bin();
    void ones_comp();
};
void binary :: read(){
    cout<<"Enter the binary number"<<endl;
    cin>>str;
}
void binary :: chk(){
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i)!='0' && str.at(i)!='1')   
        {
            cout<<"Entered number is not binary"<<endl;
            exit(0);
        }
        
    }
    
}
// void binary :: display_bin(){
//     cout<<"The entered binary number is :"<<endl;
//    for (int i = 0; i < str.length(); i++)
//    {
//        cout<<str[i];
//    }
// }
void binary :: ones_comp(){
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i)=='1')
        {
            str.at(i)='0';
        }
        else{
            str.at(i)='1';
        }
        
    }
    
}
void binary :: display_bin(){
    cout<<"\nThe 1's compliment of the binary number is :"<<endl;
   for (int i = 0; i < str.length(); i++)
   {
       cout<<str[i];
   }
}
int main()
{
    binary b;
    b.read();
    b.chk();
    b.ones_comp();
    b.display_bin();
    return 0;
}