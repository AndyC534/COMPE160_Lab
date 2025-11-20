/* 
Name: Andy Chen
Course: COMPE 160
Week: 13 Question: [1]
Brief: parameterized macro POINT(t) that generates a structure named Point with three fields of type t
*/

#include <iostream>
using namespace std;

#define POINT(t) struct Point { t x; t y; t z; };

POINT(int)

int main() {
    Point p;
    p.x = 1;
    p.y = 2;
    p.z = 3;

    cout << p.x << ", " << p.y << ", " << p.z << endl;
    return 0;
}
