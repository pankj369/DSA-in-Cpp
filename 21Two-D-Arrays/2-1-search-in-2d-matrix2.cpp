#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int m = mat.size(); //number of rows
    int n = mat[0].size(); // number of cols in each rows

    // start from the **top-right corner ** of the matrix
    int r = 0; // row index start form 0 (first row)
    int c = n - 1; // cols index strarts form last column (top right positioon)
    while (r < m && c >= 0)
    {
        if (target == mat[r][c])
        {
            return true;
        }
        else if (target < mat[r][c])
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> mat = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {11, 21, 23, 26, 30}};
    int target = 5;
    if (searchMatrix(mat, target))
        cout << "Target " << target << " found in matrix!" << endl;
    else
        cout << "Target " << target << " not found in matrix!" << endl;

    return 0;
}