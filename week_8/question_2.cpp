/* 
Name: Andy Chen
Course: COMPE 160
Week: 8 Question: [2]
Brief: Write a function SumCubes(double a[], int n) that returns the sum of cubes of the elements in an array. The cube calculation should use your MyPower() function from Question 1.
*/

#include <iostream>
using namespace std;

double MyPower(double x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

double SumCubes(double a[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += MyPower(a[i], 3);
    }
    return sum;
}

int main() {
    double arr[4];
    cout << "Enter 4 elements for the array: ";
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    double result = SumCubes(arr, 4);
    cout << "The sum of cubes of the array elements is: " << result << endl;

    return 0;
}
