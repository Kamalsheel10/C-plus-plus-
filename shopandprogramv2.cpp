#include <iostream>
using namespace std;
class pasal
{
private:
    int itemid[50];
    int itemprice[20];
    int counter;

public:
    void setprice(int);
    void displayprice(int);
};
void pasal ::setprice(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the id of the item " << endl;
        cin >> itemid[i];
        cout << "Enter the price of the item" << endl;
        cin >> itemprice[i];
    }
}
void pasal ::displayprice(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "The id of the item is " << itemid[i] << " and the price of the item is " << itemprice[i] << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of items you have brought" << endl;
    cin >> n;
    pasal ram;
    ram.setprice(n);
    ram.displayprice(n);

    return 0;
}