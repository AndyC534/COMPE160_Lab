/* Name: Andy Chen
Course: COMPE 160
Week: 1 Question: [2]
Brief: Read two integers, swap their values using XOR without a temporary variable, and print the result.
*/

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
