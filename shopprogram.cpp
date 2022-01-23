#include <iostream>
using namespace std;
class Shop
{
private:
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};
void Shop ::setPrice()
{
    int n;
    cout << "How many items have you brought?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the id of the item " << counter + 1 << endl;
        cin >> itemid[counter];
        cout << "Enter the price for the item no " << itemid[counter] << endl;
        cin >> itemprice[counter];
        counter++;
    }
}
void Shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    Shop pasal;
    pasal.initcounter();
    pasal.setPrice();
    pasal.displayPrice();

    return 0;
}