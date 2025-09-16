/* Name: Andy Chen
Course: COMPE 160
Week: 1 Question: [1]
Brief: Read three integers using only two variables by reusing one variable. Add them step by step and output the total sum.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    a = a + b;
    cin >> b;
    
    a = a + b;
    cout << a << endl;
    
    return 0;
}
