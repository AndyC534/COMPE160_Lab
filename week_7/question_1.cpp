/* Name: Andy Chen
Course: COMPE 160
Week: 7 Question: [1]
Brief: Task: Prints all the elements above the secondary diagonal of a square 2D array 
*/

#include <iostream>

using namespace std;

int main() {

    int matrix[5][5] = { {2, 3, 4, 7, 5}, {5, 4, 1 ,2 ,3}, {9, 4, 5, 2, 1}, {8, 3, 2, 1, 9}, {3, 7, 8, 4, 5} };
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4-i; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}