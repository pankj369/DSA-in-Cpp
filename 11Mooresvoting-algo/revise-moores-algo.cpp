#include <iostream>
#include <vector>

using namespace std;

int majorityElem(vector<int> &arr)
{
  int count = 0, candidates = 0;
  for (int num : arr)
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
  // phase 2 : verify the valid candidates
  count = 0;
  for (int num : arr)
  {
    if (num == candidates)
    {
      count++;
    }
  }
  if (count > arr.size() / 2)
  {
    return candidates;
  }
  return -1;
}

int main()
{
  vector<int> arr = {3, 3, 4, 5, 3, 8, 3, 3, 9};
  cout << majorityElem(arr) << endl;
  return 0;
}