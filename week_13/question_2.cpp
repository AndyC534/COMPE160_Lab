/* 
Name: Andy Chen
Course: COMPE 160
Week: 13 Question: [1]
Brief: macro that reverses the elements of an array in place
*/

#include <iostream>
using namespace std;

#define REVERSE_ARRAY(a, n, type)        \
{                                        \
    int i = 0;                          \
    int j = (n) - 1;                    \
    while (i < j) {                    \
        type t = (a)[i];               \
        (a)[i] = (a)[j];               \
        (a)[j] = t;                    \
        ++i;                            \
        --j;                            \
    }                                    \
}

int main() {
    int u[5] = {9, 4, 7, 3, 2};
    REVERSE_ARRAY(u, 5, int);

    for (int i = 0; i < 5; ++i) {
        cout << u[i] << (i + 1 < 5 ? ' ' : '\n');
    }
    return 0;
}
