#include <iostream>
using namespace std;

bool searchMatrix(int matrix[][3], int rows, int cols, int key) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == key) {
                return true; // key found
            }
        }
    }
    return false; // key not found
}

int main() {
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int rows = 4;
    int cols = 3;
    int key = 8;

    if (searchMatrix(matrix, rows, cols, key))
        cout << "Key found!" << endl;
    else
        cout << "Key not found!" << endl;

    return 0;
  }