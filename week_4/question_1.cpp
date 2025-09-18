/* Name: Andy Chen
Course: COMPE 160
Week: 4 Question: [1]
Brief: Read a positive integer and print the sum of its digits using a while loop with cin and cout.
*/

#include <iostream>

using namespace std;

int main(){
    int number;
    cin >> number;
    int sum = 0;

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    cout << sum << endl;

    return 0;

}