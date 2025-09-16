/* 
Name: Andy Chen
Course: COMPE 160
Week: 3 Question: 1
Brief: Check if a given year is a leap year using logical operators.
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "Leap Year" << endl;
    } else {
        cout << "Not a Leap Year" << endl;
    }
    return 0;
}
