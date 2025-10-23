#include <iostream>
#include <climits>

using namespace std;
// ? linear search in 2d array
pair<int, int> searchMatrix(int matrix[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == key)
            {
                return {i, j}; // return pair of indices
            }
        }
    }
    return {-1, -1}; // if not found
}

// ? maximum row sum
int getMaxSum(int matrix[][3], int rows, int cols)
{
    int maxRowSum = INT8_MIN;
    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSum += matrix[i][j];
        }
        maxRowSum = max(maxRowSum, rowSum);
    }
    return maxRowSum;
}
//? maximum colums sum
int getmaxSum2(int matrix[][3], int rows, int cols)
{
    int maxColsSum = INT_MIN;
    for (int i = 0; i < cols; i++)
    {
        int colsSum = 0;
        for (int j = 0; j < rows; j++)
        {
            colsSum += matrix[j][i];
        }
        maxColsSum = max(maxColsSum, colsSum);
    }
    return maxColsSum;
}
// ?Diagonal sum

int diagonalSum(int matrix[][4], int n)
{
    int sum = 0;
    //primary diagonal = j==i;
    //secondary diagonal =  j=n-i-1
    for (int i = 0; i < n; i++)
    {
        sum+=matrix[i][i]; //optimise approch
        if(i != n-i-1){
            sum+=matrix[i][n-i-1];
        }
        // for (int j = 0; j < n; j++)
        // {
        //     if (i == j)
        //     {
        //         sum += matrix[i][j];
        //     }
        //     else if (j == n - 1 - i)
        //     {
        //         sum += matrix[i][j];
        //     }
        // }
    }
    return sum;
}
int main()
{
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int n = 4;
    cout << diagonalSum(matrix, n) << endl;

    // int rows = 3, cols = 3, key = 9;

    // cout << getmaxSum2(matrix, rows, cols) << endl;
    // cout << getMaxSum(matrix, rows, cols) << endl;
    // pair<int, int> pos = searchMatrix(matrix, rows, cols, key);

    // if (pos.first != -1)
    //     cout << "Key found at position: (" << pos.first << ", " << pos.second << ")" << endl;
    // else
    //     cout << "Key not found!" << endl;

    return 0;
}