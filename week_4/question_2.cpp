/* Name: Andy Chen
Course: COMPE 160
Week: 4 Question: [2]
Brief: Task: Ask the user to enter positive integers and keep when the user enters 0 or a negative number, print the greatest number that was entered and stop.
*/

#include <iostream>

using namespace std;

int main(){
    int input;
    int p = 0;

    cin >> input;

    while (input != 0) {
        if (input > p) {
            p = input;
        }
        cin >> input;
    }
    cout << p << endl;
    
    return 0;
}