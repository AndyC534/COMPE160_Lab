/* Name: Andy Chen
Course: COMPE 160
Week: 14 File: MyLibrary.cpp
Brief: Implementation file defining the logic for Sum2 and Sum4. */

#include "MyLibrary.h"

// Returns the sum of two arguments
int Sum2(int a, int b) {
    return a + b;
}

// Returns the sum of four arguments by utilizing Sum2
int Sum4(int a, int b, int c, int d) {
    // We compute the sum of the first pair and the second pair using Sum2
    int part1 = Sum2(a, b);
    int part2 = Sum2(c, d);
    
    // Then we sum those two results together
    return Sum2(part1, part2);
}