#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;
/*
* time complexity for this in o (n3)
int maxSubarraySumBruteForce(vector<int>& arr){
int n=arr.size();
int maxSum=INT_MIN;//initially set to lowest possible value;

for(int i=0; i<n; i++){//start index of subarray
for(int j=i;j<n; j++){ //end index of subarrray
int sum=0;
for(int k=i; k<=j; k++){//adds elements from i to j
  sum+=arr[k];
}
maxSum=max(maxSum,sum);
}
}
return maxSum;
}

int main(){
  vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
  cout << "Maximum Subarray Sum (Brute Force): " << maxSubarraySumBruteForce(arr) << endl;
    return 0;
}
*/

// ! prefix sum
/*
int maxSubarraySumPrefixSum(vector<int>& arr){
  int n=arr.size();
  vector<int> prefix(n);
  prefix[0]=arr[0];

  for(int i=1; i<n; i++){
    prefix[i]=prefix[i-1]+arr[i];//build prefix sum array
  }
  int maxSum=INT_MIN;

  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      int sum;
      if(i==0){
        sum=prefix[i];
      }else{
        sum=prefix[j]-prefix[i-1];
        maxSum=max(maxSum, sum);
      }
    }
  }
  return maxSum;
}

int main(){
  vector<int> arr={-2, 1, -3,4,-1,2, 1, -5, 4};
  cout<<"Maximum Subarray Sum (Prefix Sum) : "<<maxSubarraySumPrefixSum(arr)<<endl;
  return 0;
}
  */
/*
  int maxSubarraySumKadane(vector<int>& arr){
    int currentSum=0;
    int maxSum=INT_MIN;
    for(int i=0; i<arr.size(); i++){
      currentSum+=arr[i]; //add current element to the running sum
      if(currentSum>maxSum){
        maxSum = currentSum; //update maxSum if we found a new max
      }
      if(currentSum<0){
        currentSum=0;//Drop the current subarray if sum becomes negative
      }
    }
    return maxSum;
  }
  int main(){
    vector<int>arr= {-2,1,-3,4,-1,2,1,-5,4};
    cout<<"Maximum subarray sum (kadane's) : "<<maxSubarraySumKadane(arr)<<endl;
    return 0;
  }
    */
/*
//! Maximum Subarray sum (subarray means contiguous part of a given array)
int main(){
int n=5;
int arr[5]={1,2,3,4,5};
for(int start=0; start<n; start++ ){
 for(int end=start; end<n; end++){
   for(int i=start; i<=end; i++){
     cout<<arr[i];
   }
   cout<<" ";
 }
 cout<<endl;
}
return 0;
}
*/
//! brute force approch - is the simplest approch to solve maximum subarray sum but it is not more effecient to use in real-world project
// * time complexity for this in o (n2)

// int main(){
//   int n=5;
//   int arr[5]={1,2,3,4,5};
//   int maxSum=INT_MIN;
//   for(int start=0; start<n; start++){ //start
//     int currentSum=0;
//     for(int end=start; end<n; end++){ //end
//       currentSum+=arr[end];
//       maxSum=max(currentSum, maxSum);
//     }
//   }
//   cout<<"Max Subarray Sum : "<<maxSum<<endl;
//   return 0;
// }

// ! using kadane's algorithm - most efficient way to sovle max subarray sum
//! “At every index in the array, you decide whether to start a new subarray OR continue the previous one — whichever gives a larger sum.”
// !If the current running sum (currentSum) becomes negative, discard it and start fresh from the current element.

int maxSubarraySum(vector<int>& arr)
{
  int currSum = arr[0];
  int maxSum = INT_MIN;//we can initialise this as arr[0];
  for (int i = 1; i < arr.size(); i++)
  {
    currSum = max(arr[i], currSum + arr[i]);
    maxSum = max(maxSum, currSum);
  }
  return maxSum;
}

int main()
{
  vector<int> arr = {5,4,-1,7,8};

  cout << "Maximum Subarray Sum : "<<maxSubarraySum(arr) << endl;
  return 0;
}