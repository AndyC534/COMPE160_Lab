/* 
Name: Andy Chen
Course: COMPE 160
Week: 10 Question: [2]
Brief: Find the maximum element in an array using recursion.
*/

#include <iostream>
using namespace std;

double findMax(double arr[], int n) {
    if (n == 1)
        return arr[0];

    double maxOfRest = findMax(arr, n - 1);

    return (arr[n - 1] > maxOfRest) ? arr[n - 1] : maxOfRest;
}

int main() {
    double numbers[] = {3.5, 7.2, 1.8, 9.6, 4.3};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    double maxValue = findMax(numbers, size);

    cout << "The maximum element is: " << maxValue << endl;

    return 0;
}
