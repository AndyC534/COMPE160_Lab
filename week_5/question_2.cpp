/* Name: Andy Chen
Course: COMPE 160
Week: 5 Question: [2]
Brief: Task: Ask user to enter a positive integer and prints out Yes or No if it's a perfect number.
*/

#include <iostream>

using namespace std;

int main(){
    
    int a = 0;
    int sum = 0;

    cin >> a;

    for (int i = 1; i <= a-1; ++i){
        if (a % i == 0){
            sum = sum + i;
            cout << i << endl;
        }
    }
    if (sum == a){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}