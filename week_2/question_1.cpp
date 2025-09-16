/* Name: Andy Chen
Course: COMPE 160
Week: 2 Question: 1
Brief: Swap two integers using XOR without a temporary variable. */

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b << endl;
    return 0;
}
