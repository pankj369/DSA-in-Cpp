#include <iostream>
#include <vector>
using namespace std;

// !Peak Index in Mountain array
int peakIndex(vector<int> &arr)
{
  // handling edge case
  int st = 1, end = arr.size() - 2; // peak cannot be first or last
  while (st <= end)
  {
    int mid = st + (end - st) / 2;
    if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])//found peak
    {
      return mid;
    }
    else if (arr[mid - 1] < arr[mid])//ascending part, move right
    {
      st = mid + 1;
    }
    else//descending part, move left
      {
        end = mid - 1;
      }
  }
  return -1;
}

int main()
{
  vector<int> arr1 = {0, 10, 5, 2};
  cout << "Peak index is : " << peakIndex(arr1) << endl;
  return 0;
}