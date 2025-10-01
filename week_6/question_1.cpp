/* Name: Andy Chen
Course: COMPE 160
Week: 6 Question: [1]
Brief: Task: Reverses the order of numbers in a given array
*/

#include <iostream>

using namespace std;

int main() {

    int a[9];

    for(int i = 0; i < 9; i++) {
        cin >> a[i];
    }

    for (int i = 8; i >= 0; i--) {
        cout << a[i] << " ";
    }

    return 0;
}