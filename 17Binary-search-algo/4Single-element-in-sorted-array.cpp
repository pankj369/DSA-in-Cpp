#include <iostream>
#include <vector>
using namespace std;
/* 
int singleNonDuplicate(vector<int> &nums)
{
  int n = nums.size();
  if (n == 1)
    return nums[0];
  int st = 0, end = n - 1;
  while (st <= end)
  {
    int mid = st + (end - st) / 2;
    // handling edge case
    if (mid == 0 && nums[0] != nums[1])
      return nums[mid];
    if (mid == n - 1 && nums[n - 1] != nums[n - 2])
      return nums[mid];
    // mainlogic
    if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
      return nums[mid];
    if (mid % 2 == 0)
    { // evem
      if (nums[mid - 1] == nums[mid])
      { // left
        end = mid - 1;
      }
      else
      { // right
        st = mid + 1;
      }
    }
    else
    {
      if (nums[mid - 1] == nums[mid])
      {               // odd
        st = mid + 1; // left
      }
      else
      {
        end = mid - 1; // right
      }
    }
  }
  return -1;
}
*/
int singleNonDuplicate(vector<int> &nums) {
    int st = 0, end = nums.size() - 1;
    while (st < end) {
        int mid = st + (end - st) / 2;
        if (mid % 2 == 1) mid--; // Ensure mid is even
        
        if (nums[mid] == nums[mid + 1]) {
            st = mid + 2; // single is on the right
        } else {
            end = mid; // single is on the left or at mid
        }
    }
    return nums[st];
}
int main()
{
  vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
  vector<int> nums1 = {3, 3, 7, 7,4, 10, 10, 11, 11};
  cout << "Single array in sorted element : " << singleNonDuplicate(nums) << endl;
  cout << "Single array in sorted element : " << singleNonDuplicate(nums1) << endl;
}