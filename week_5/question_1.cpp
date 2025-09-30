/* Name: Andy Chen
Course: COMPE 160
Week: 5 Question: [1]
Brief: Task: Asks the user to enter 7 integers then compute and print the sum of numbers greater than 25 and the sum of numbers less than 75.
*/

#include <iostream>

using namespace std;

int main() {

    int a = 0;
    int highsum = 0;
    int lowsum = 0;

    for(int i = 0; i < 7; i++) {
        cin >> a;
        if (a >= 25){
            highsum += a;
        }
        if (a <= 75){
            lowsum += a;
        }
    }

    cout << "Sum of numbers > 25: " << highsum << endl;
    cout << "Sum of numbers < 75: " << lowsum << endl;


    return 0;
}