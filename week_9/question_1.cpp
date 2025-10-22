/* Name: Andy Chen
Course: COMPE 160
Week: 9 Question: [1]
Brief: Demonstrates variable shadowing using an inner variable with the same name as an outer variable.
*/

#include <iostream>
using namespace std;

int main() {
    
    int var;
    cin >> var;
    int* point = &var;
    {
        int var;
        cin >> var;
        cout << var << endl;
        cout << *point << endl;
    }

    return 0;
}
