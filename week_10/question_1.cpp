/* 
Name: Andy Chen
Course: COMPE 160
Week: 10 Question: [1]
Brief: Demonstrate a function pointer used as an argument to sum values
       of a function applied over a range of integers.
*/

#include <iostream>
using namespace std;

int f(int left, int right, int (*func)(int)) {
    int sum = 0;
    for (int i = left; i <= right; ++i) {
        sum += func(i);
    }
    return sum;
}

int square(int x) {
    return x * x;
}

int doubleNum(int x) {
    return 2 * x;
}

int main() {
    int left = 1, right = 5;

    cout << "Sum of squares from " << left << " to " << right << ": "
         << f(left, right, square) << endl;

    cout << "Sum of doubles from " << left << " to " << right << ": "
         << f(left, right, doubleNum) << endl;

    return 0;
}
