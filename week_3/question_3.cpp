/* 
Name: Andy Chen
Course: COMPE 160
Week: 3 Question: 3
Brief: Compare goals for two teams and print the result using if/else.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a == b) {
        cout << "Draw" << endl;
    } else if (a > b) {
        cout << "Winner: Team A" << endl;
    } else {
        cout << "Winner: Team B" << endl;
    }
    return 0;
}
