#include <iostream>
#include <vector>

using namespace std;
// *Binary Search- can only be used with sorted array(either in ascending or descending ord)
int binarySearch(vector<int> arr, int tar)
{
  int st = 0, end = arr.size() - 1;

  while (st <= end)
  {
    int mid = st + (end - st) / 2;
    if (tar > arr[mid])
    {
      st = mid + 1;
    }
    else if (tar < arr[mid])
    {
      end = mid - 1;
    }
    else
    {
      return mid;
    }
  }
  return -1;
}
int main()
{
  vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // odd size
  int tar1 = 12;
  cout << "The result of binarySearch : " << binarySearch(arr1, tar1) << endl;
  vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // even size
  int tar2 = 12;
  cout << "The result of binarySearch : " << binarySearch(arr2, tar2) << endl;
  return 0;
}