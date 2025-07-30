#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// !kadane's algorithm
/*
int main(){
  int arr[9]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int n=9;
  int currSum=0;
  int maxSum=INT_MIN;// INT_MIN ensures that maxSum starts with the lowest possible integer (in case all numbers are negative)
  for(int i=0; i<n; i++){
      currSum+=arr[i]; //add current element to currSum
      maxSum=max(currSum, maxSum); // update maxsum if currsum is highet
     if(currSum<0)  currSum=0;//reset currsum if it goes below 0
  }
  cout<<"Max Subarray Sum : "<<maxSum<<endl;
  return 0;
}
  */
//  !Give a circular array, find the maximum possible sum of a subarray
/*
// * kadane for maximum
int kadaneMax(int arr[], int n)
{
  int currSum = 0;
  int maxSum = INT_MIN;
  for (int start = 0; start < n; start++)
  {
    currSum += arr[start]; //add element to current subarray
    maxSum = max(maxSum, currSum); //update
    if (currSum < 0)
      currSum = 0; //reset to 0 if current sum is less than 0
  }
  return maxSum;
}
// * kadane for minimum
int kadaneMin(int arr[], int n)
{
  int currSum = 0;
  int minSum = INT_MAX;
  for (int start = 0; start < n; start++)
  {
    currSum += arr[start]; //add elements to current sum/subarray
    minSum = min(minSum, currSum);//update
    if (currSum > 0)
      currSum = 0;//reset to 0 if positive , becos we are searching for the smallest sum
  }
  return minSum;
}
int main()
{
  int arr[] = {5, -3, 5};
  int n = 3;
  // *total sum of whole array
  int totalSum = 0;
  for (int start = 0; start < n; start++)
  {
    totalSum += arr[start];
  }
  // *case1. normal (non-circular) max
  int maxLinear = kadaneMax(arr, n);
  // *Case2. circular max
  int minSubarraySum = kadaneMin(arr, n);
  int maxCircular = totalSum - minSubarraySum;
  // *final answer
  int result = max(maxLinear, (maxCircular == 0 ? maxLinear : maxCircular));
  cout << result << endl; //prints 10
  return 0;
}
  */
//  ! Find how many subarrays have the maximum sum (found using kadane's)
int countMaxSubarray(vector<int>& arr)
{
  int n = arr.size();
  int currSum = 0;
  int maxSum = INT_MIN;
  int count = 0; // means how many times maxSUm found
  for (int start = 0; start < n; start++)
  {
    currSum += arr[start]; // add elements to currSum;
    if (currSum > maxSum)
    {                   // if the current sum is greater than the privious maximum, we found a new best subarray
      maxSum = currSum; // so update the maxSum
      count = 1;        // so, new max found, reset count to 1
    }
    else if (currSum == maxSum)
    {          // if the current sum is equal to maxsum, we found another subarray with equal max sum
      count++; // so increment count
    }
    if (currSum < 0)
      currSum = 0; // reset if sum drops below 0
  }
  return count;
}
int main()
{
  vector<int> arr = {1, 2, -1, 2, -3, 2, 2};
  cout << countMaxSubarray(arr) << endl;
  return 0;
}