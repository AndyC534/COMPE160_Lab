/* Name: Andy Chen
Course: COMPE 160
Week: 2 Question: 2
Brief: Perform integer addition using only bitwise operators and loops. */

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while (b != 0) {
        int carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }

    cout << a << endl;
    return 0;
}
