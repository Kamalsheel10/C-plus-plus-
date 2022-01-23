#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin();
    void display_bin();
    void onecomp_bin();
};
void binary::read()
{
    cout << "Enter any binary number" << endl;
    cin >> s;
}
void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect format of binary number" << endl;
            exit(0);
        }
    }
}
void binary::onecomp_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
void binary::display_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    // b.display_bin();
    b.onecomp_bin();
    b.display_bin();

    return 0;
}