/* Name: Andy Chen
Course: COMPE 160
Week: 14 File: Main.cpp
Brief: Main driver program that tests the Sum4 function from MyLibrary. */

#include <iostream>
#include "MyLibrary.h" // Include our custom library

using namespace std;

int main() {
    // Call Sum4 with sample arguments (1, 2, 3, 4)
    int result = Sum4(1, 2, 3, 4);

    // Print the result to the console
    cout << result << endl;

    return 0;
}