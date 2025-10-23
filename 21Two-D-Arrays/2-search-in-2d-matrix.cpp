#include <iostream>
#include <vector>

using namespace std;

bool searchInRow(vector<vector<int>> &mat, int target, int row)
{
    int n = mat[0].size();
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target == mat[row][mid])
        {
            return true;
        }
        else if (target > mat[row][mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    // BS on total rows
    int m = mat.size(), n = mat[0].size();
    int stRow = 0, endRow = m - 1;
    while (stRow <= endRow)
    {
        int midR = stRow + (endRow - stRow) / 2;
        if (target >= mat[midR][0] && target <= mat[midR][n - 1])
        {
            // found the row  = > BS on this row
            return searchInRow(mat, target, midR);
        }
        else if (target >= mat[midR][n - 1])
        {
            // down => right
            stRow = midR + 1;
        }
        else
        {
            endRow = midR - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> mat = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 34;
    if (searchMatrix(mat, target))
        cout << "Target " << target << " found in matrix!" << endl;
    else
        cout << "Target " << target << " not found in matrix!" << endl;

    return 0;
}