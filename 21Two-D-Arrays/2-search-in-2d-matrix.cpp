#include <iostream>
#include <vector>

using namespace std;

bool searchInRow(vector<vector<int>> &mat, int target, int row)
{
    int n = mat[0].size();  //number of columns in the first row
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2; //calculating mid index
        if (target == mat[row][mid]) // found the target at mid index 
        {
            return true;
        }
        else if (target > mat[row][mid]) // target in on right side
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1; // target is on left side
        }
    }
    return false; // if target is not found return false
}

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    // BS on total rows
    int m = mat.size();//number of row in the matrix
    int n = mat[0].size();//number of columns in the first row
    int stRow = 0, endRow = m - 1;  //first and last row index
    while (stRow <= endRow)
    {
        int midR = stRow + (endRow - stRow) / 2; //calculatinf mid row index
        //checking whether the target value lies between the first and last elements of the current (middle) row.
        if (target >= mat[midR][0] && target <= mat[midR][n - 1]) 
        {
            //  search for the target in that row using searchInRow() ( also called this function)
            return searchInRow(mat, target, midR);
        }
        //if the target is greater than the last element of the mid row - then the target must be in a row below
        else if (target >= mat[midR][n - 1])
        {
            // down => right
            stRow = midR + 1; // move to next row (down)
        }
        else
        {// otherwise , target is smaller  -> search in  upper rows
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