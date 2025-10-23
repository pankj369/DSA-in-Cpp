#include <iostream>
using namespace std;

pair<int, int> searchMatrix(int matrix[][3], int rows, int cols, int key) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == key) {
                return {i, j}; // return pair of indices
            }
        }
    }
    return {-1, -1}; // if not found
}

int main() {
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int rows = 4, cols = 3, key = 9;
    pair<int, int> pos = searchMatrix(matrix, rows, cols, key);

    if (pos.first != -1)
        cout << "Key found at position: (" << pos.first << ", " << pos.second << ")" << endl;
    else
        cout << "Key not found!" << endl;

    return 0;
}