#include <iostream>
#include <climits>

using namespace std;
// ? linear search in 2d array
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


// ? maximum row sum
int getMaxSum(int matrix[][3], int rows, int cols){
    int maxRowSum=INT8_MIN;
    for(int i=0; i<rows; i++){
        int rowSum=0;
        for(int j=0; j<cols; j++){
            rowSum+=matrix[i][j];
        }    
        maxRowSum=max(maxRowSum, rowSum);
    }
    return maxRowSum;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3, cols = 3, key = 9;

    cout<<getMaxSum(matrix, rows, cols)<<endl;

    // pair<int, int> pos = searchMatrix(matrix, rows, cols, key);

    // if (pos.first != -1)
    //     cout << "Key found at position: (" << pos.first << ", " << pos.second << ")" << endl;
    // else
    //     cout << "Key not found!" << endl;

    return 0;
}