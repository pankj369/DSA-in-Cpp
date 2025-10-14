#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// !finding maximum subarray sum using O(n2)
/*

int maxSubarraySum(vector<int> &arr)
{
    int maxSum = INT_MIN;

    for (int st = 0; st < arr.size(); st++)
    {
        int currSum = 0;
        for (int end = st; end < arr.size(); end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}
int main()
{
    vector<int> arr = {5, 8, -7, -2, 6, 1, -8, 7};
    cout << "Maximum Subarray Sum is : " << maxSubarraySum(arr);
    return 0;
}
    */

// ! Kadane's algo
int kadanesAlgo(vector<int> &arr)
{
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {5, 8, -7, -2, 6, 1, -8, 7};
    cout << "Maximum Subarray Sum is : "<<kadanesAlgo(arr);
    return 0;
}