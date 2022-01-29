#include <iostream>
#include <iomanip>
using namespace std;

class y;

class x
{
private:
    int data;
    friend class sum;

public:
    void setdata(int n1)
    {
        data = n1;
    }
};
class y
{
    int num;
    friend class sum;

public:
    void setvalue(int n2)
    {
        num = n2;
    }
};
class sum
{
public:
    void add(x o1, y o2)
    {
        cout << "The sum of two numbers is : " << o1.data + o2.num << endl;
    }
};
int main()
{
    x a1;
    a1.setdata(87);
    y b1;
    b1.setvalue(567);
    sum r1;
    r1.add(a1,b1);

    return 0;
}
