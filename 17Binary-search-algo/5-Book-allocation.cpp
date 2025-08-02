#include <iostream>
#include <vector>
using namespace std;

// book allocation problem based on binary search
bool isValid(vector<int> &arr, int n, int m, int mid) // O(logN*n)
{                                                     // maxAllowedpage
  int students = 1, pages = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > mid)
    {
      return false; // single book has more pages than allowed
    }
    if (pages + arr[i] <= mid)
    {
      pages += arr[i];
    }
    else
    {
      students++; // allocate to next student
      pages = arr[i];
    }
  }
  return students > m ? false : true;
}
int bookAllocation(vector<int> &arr, int n, int m)
{
  // edge case
  if (m > n)
    return -1; // more students than books
  // finding sum
  int sum = 0;
  for (int i = 0; i < n; i++) // O(n)
  {
    sum += arr[i];
  }
  int ans = -1;
  int st = 0;
  int end = sum;    // range of possible ans
  while (st <= end) // O(logN)
  {
    int mid = st + (end - st) / 2;
    if (isValid(arr, n, m, mid))
    { // left
      ans = mid;
      end = mid - 1; // try for smaller max
    }
    else
    {
      st = mid + 1; // increase allowed pages
    }
  }
  return ans;
}

int main()
{
  vector<int> arr = {2, 1, 3, 4};
  int n = 4, m = 2;
  cout << bookAllocation(arr, n, m) << endl;
  return 0;
}