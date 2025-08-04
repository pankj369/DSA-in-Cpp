#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// function to check possible value
bool isPossible(vector<int> &arr, int n, int m, int maxTimeAllowed)
{ // time-complexity = O(n)
  int painters = 1, time = 0;
  for (int i = 0; i < n; i++)
  {
    if (time + arr[i] <= maxTimeAllowed)
    {
      time += arr[i];
    }
    else
    { // new painters
      painters++;
      time = arr[i];
    }
  }
  return painters <= m;
}
int minTimeToPaint(vector<int> &arr, int n, int m)
{ // final time complexity = O(log(sum)*n)
  int sum = 0;
  int maxVal = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    maxVal = max(maxVal, arr[i]);
  }
  int st = maxVal, end = sum, ans = -1;
  while (st <= end)
  {                                // time complexity = log(sum)*n
    int mid = st + (end - st) / 2; // finding mid value
    if (isPossible(arr, n, m, mid))
    { // left
      ans = mid;
      end = mid - 1;
    }
    else
    { // right
      st = mid + 1;
    }
  }
  return ans;
}
int main()
{
  vector<int> arr = {40, 30, 10, 20};
  int n = 4, m = 2;
  cout << minTimeToPaint(arr, n, m) << endl;
  return 0;
}