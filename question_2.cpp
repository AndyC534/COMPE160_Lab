/* Name: Andy Chen
Course: COMPE 160
Week: 6 Question: [2]
Brief: Task: Searches for a number in a sorted array
*/

#include <iostream>

using namespace std;

int main() {

    int a[9];
    int input;

    for(int i = 0; i < 9; i++) {
        cin >> a[i];
    }

    cin >> input;

    for(int j = 0; j < 9; j++) {
        if (a[j] == input) {
            cout << input << endl;
            return 0;
        }else{
            cout << -1 << endl;
            return 0;
        }
    }
    return 0;
}