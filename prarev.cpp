#include <iostream>
using namespace std;

int main() {

    int divisor, dividend, result;

    cout << "Enter the divisor: ";
    cin >> divisor;
    
    cout << "Enter the dividend: ";
    cin >> dividend;

    // dividend / divisor

    try {        
        if (divisor == 0 && dividend == 0) { // checking undefined case
            throw "Undefined Case";

        } else if (divisor == 0) { // checking divide by 0 case
            throw 0;

        } else {
            result = dividend / divisor;
            cout << "Result: " << result;
            
        }

    } catch (int x) {
        cout << "Can't divide by zero";

    } catch (char const* msg) {
        cout << msg;

    }

    return 0;
    
}