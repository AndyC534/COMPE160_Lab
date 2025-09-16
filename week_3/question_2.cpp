/* 
Name: Andy Chen
Course: COMPE 160
Week: 3 Question: 2
Brief: Print a right triangle star pattern using nested for loops.
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
