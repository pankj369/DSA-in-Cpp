#include <iostream>
#include <vector>
using namespace std;

//! Pair Sum- return pair in sorted array with target sum
// * this is a brute force approch , we use nested loop time complexity O(n2)
/*
vector<int> pairSum(vector<int> nums, int target){
vector<int> ans;
 int n=nums.size();
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(nums[i]+nums[j]==target){
        ans.push_back(i);
        ans.push_back(j);
        return ans;
      }
    }
  }
  return ans;
}
int main(){
  vector<int> nums={2,7,11,15};
  int target=13;
 vector<int> ans=pairSum(nums, target);
 cout<<ans[0]<<", "<<ans[1]<<endl;
 return 0;
}
*/
// *optimise way to return pair in shorted array with target sum
//
// *two pointer approch
// *linear time complexity
/*
vector<int> pairSum(vector<int> nums, int target)
{
  vector<int> ans;
  int n = nums.size();
  int i = 0, j = n - 1;
  while (i < j)
  {
    int pairSum = nums[i] + nums[j];
    if (pairSum > target)
    {
      j--;
    }
    else if (pairSum < target)
    {
      i++;
    }
    else
    {
      ans.push_back(i);
      ans.push_back(j);
      break;
    }
  }
  return ans;
}
int main()
{
  vector<int> nums = {2, 7, 11, 15};
  int target = 13;
  vector<int> ans = pairSum(nums, target);
  cout << ans[0] << ", " << ans[1] << endl;
  return 0;
}
*/
// !Majority element using sort
//! Majority element using Moore's voting algo-more optimise on leetcode

int majorityElement(vector<int> &nums)
{
  // initialize values
  int count = 0;
  int candidates = 0;
  // phase 1;
  for (int num : nums)
  {
    if (count == 0)
    {
      candidates = num;
    }
    if (num == candidates)
    {
      count++;
    }
    else
    {
      count--;
    }
  }
  // phase 2
  count = 0;
  for (int num : nums)
  {
    if (num == candidates)
    {
      count++;
    }
  }
  if (count > nums.size() / 2)
  {
    return candidates;
  }
  return -1;
}
int main()
{
  vector<int> nums = {3, 3, 4, 2, 3, 3, 5, 3};

  cout << majorityElement(nums) << endl;
}