#include <iostream>

using namespace std;

int main(){
    int input;
    int p = 0;

    cin >> input;

    while (input != 0) {
        if (input > p) {
            p = input;
        }
        cin >> input;
    }
    cout << p << endl;
    
    return 0;
}