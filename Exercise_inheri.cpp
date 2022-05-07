#include <iostream>
#include <math.h>
using namespace std;
class SimpleCalculator
{
protected:
    int a, b;

public:
    void set_numbers(int x, int y)
    {
        a = x;
        b = y;
    }
    void utility()
    {
        int operation;
        cout << "Choose the operation that you want to perform:\n1. +\n2. -\n3. /\n4. *\n";
        cin >> operation;
        if (operation == 1)
        {
            cout << "You have chosen addition" << endl;
            cout << "The sum of two numbers are: " << a + b << endl;
        }
        else if (operation == 2)
        {
            cout << "You have chosen substraction" << endl;
            cout << "The differnece of two numbers are: " << a - b << endl;
        }
        else if (operation == 3)
        {
            cout << "You have chosen division" << endl;
            cout << "The divison of two numbers are: " << a / b << endl;
        }
        else if (operation == 4)
        {
            cout << "You have chosen multiplication" << endl;
            cout << "The multiplication of two numbers are: " << a * b << endl;
        }
        else
        {
            cout << "Choose from 1 to 4 as indicated above" << endl;
            exit(0);
        }
    }
};
class ScientificCalculator
{
protected:
    int c, d;

public:
    void set_numbers2(int x, int y)
    {
        c = x;
        d = y;
    }
    void utility1()
    {
        float op1;
        cout << "Choose the operation that you want to perform:\n1. sin\n2. cos\n3. tan\n4. tanh\n";
        cin >> op1;
        if (op1 == 1)
        {
            cout << "You have chosen sin operation" << endl;
            cout << "The value of number " << c << " is " << sin(c) << endl;
            cout << "The value of number " << d << " is " << sin(d) << endl;
        }
        else if (op1 == 2)
        {
            cout << "You have chosen cos operation" << endl;
            cout << "The value of number " << c << " is " << cos(c) << endl;
            cout << "The value of number " << d << " is " << cos(d) << endl;
        }
        else if (op1 == 3)
        {
            cout << "You have chosen tan operation" << endl;
            cout << "The value of number " << c << " is " << tan(c) << endl;
            cout << "The value of number " << d << " is " << tan(d) << endl;
        }
        else if (op1 == 4)
        {
            cout << "You have chosen tanh operation" << endl;
            cout << "The value of number " << c << " is " << tanh(c) << endl;
            cout << "The value of number " << d << " is " << tanh(d) << endl;
        }
        else
        {
            cout << "Choose from 1 to 4 as indicated above" << endl;
            exit(0);
        }
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void diplayCalculation()
    {
        utility();
        utility1();
    }
};
int main()
{
    HybridCalculator Cal;
    Cal.set_numbers(5,10);
    Cal.set_numbers2(30,0);
    Cal.diplayCalculation();
    return 0;
}