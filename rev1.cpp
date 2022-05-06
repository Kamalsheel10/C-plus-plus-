#include <iostream>
#include <string>
using namespace std;

// Swapping using reference variable

// void swap(int &x, int &y){
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
// }
// int main(){
//     int a=20, b=30;
//     cout<<"BEFORE SWAPPING THE NUMBERS"<<endl;
//     cout<<a<<"\t"<<b<<endl;
//     swap(a,b);
//     cout<<"AFTER SWAPPING THE NUMBERS"<<endl;
//     cout<<a<<"\t"<<b;

// Basic program using class and object

// class employee
// {
// private:
//     int a, b, c;

// public:
//     int d, e;
//     void setData(int a1, int b1, int c1);
//     void displayData()
//     {
//         cout << "The value of a is: " <<a<< endl;
//         cout << "The value of b is: " <<b<< endl;
//         cout << "The value of c is: " <<c<<endl;
//         cout << "The value of d is: " <<d<< endl;
//         cout << "The value of e is: " <<e<< endl;
//     }
// };
// void employee::setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }
// {
//     employee Ram;
//     Ram.d = 34;
//     Ram.e = 56;
//     Ram.setData(45, 76, 67);
//     Ram.displayData();

// Prgram to check binary number and perform one's complement

// class binary
// {
// private:
//     string s;

// public:
//     void read();
//     void chk_bin();
//     void ones_comp();
//     void display();
// };
// void binary::read()
// {
//     cout << "Enter a binary number" << endl;
//     cin >> s;
// }
// void binary::chk_bin()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "You have entered invalid number" << endl;
//             exit(0);
//         }
//     }
// }
// void binary::ones_comp()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '1')
//         {
//             s.at(i) = '0';
//         }
//         else
//         {
//             s.at(i) = '1';
//         }
//     }
// }
// void binary ::display()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout << s.at(i);
//     }
// }

// int main()
// {
//     binary b;
//     b.read();
//     b.chk_bin();
//     b.ones_comp();
//     b.display();
class shop
{
private:
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void setcounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};
void shop::setPrice()
{
    int n;
    cout << "How many items have you purchased?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the id of the item no " << counter+1 << endl;
        cin >> itemid[counter];
        cout << "Enter the price of the item" << endl;
        cin >> itemprice[counter];
        counter++;
    }
}
void shop::displayPrice()
{
    for (int j= 0; j < counter; j++)
    {
        cout << "The id of the item  is: " << itemid[j] << endl;
        cout << "The price of the item  no "<<itemid[j]<<" is: " << itemprice[j] << endl;
    }
}
int main()
{
    shop pasal;
    pasal.setcounter();
    pasal.setPrice();
    pasal.displayPrice();
    return 0;
}