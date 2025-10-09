/* Name: Andy Chen
Course: COMPE 160
Week: 7 Question: [2]
Brief: Task: Find at least one minimax element in a given 2D matrix
*/

#include <iostream>
using namespace std;

int main() {

    int matrix[4][5] = {
        {2, 3, 1, 7, 5},
        {5, 4, 3, 2, 3},
        {9, 5, 4, 7, 8},
        {8, 3, 2, 1, 9}
    };

    for (int row_index = 0; row_index < 4; row_index++) {
        int min_col_index = 0;
        for (int col_index = 1; col_index < 5; col_index++) {
            if (matrix[row_index][col_index] < matrix[row_index][min_col_index]) {
                min_col_index = col_index;
            }
        }

        bool is_col_max = true;
        for (int k = 0; k < 4; k++) {
            if (matrix[k][min_col_index] > matrix[row_index][min_col_index]) {
                is_col_max = false;
                break;
            }
        }

        if (is_col_max) {
            cout << "Minimax element found: " << matrix[row_index][min_col_index] << endl;
            return 0;
        }
    }

    cout << "No minimax element found in the matrix.\n";
    return 0;
}
