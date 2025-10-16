/* Name: Andy Chen
Course: COMPE 160
Week: 8 Question: [1]
Brief: Task: Write a function MyPower(double x, int n) that returns x raised to the n-th power 
*/

#include <iostream>
using namespace std;

int MyPower(int x, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    int power = MyPower(base, exponent);
    cout << base << " raised to the power " << exponent << " is " << power << endl;

    return 0;
}
