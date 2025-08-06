#include <iostream>
#include <algorithm>

using namespace std;

// !Sorting-the process of arranging a data in a particular order is called sorting.

// !Bubble sort -Ist sorting algorithm 
/*
void bubbleSort(int arr[], int n) // time complexity is O(n^2)
{

  for (int i = 0; i < n - 1; i++)
  { // if outer loop runs 1 times, if it runs 1+n
    bool isSwap = false;

    for (int j = 0; j < n - i - 1; j++)
    { // inner loop runs n times, runs n*n
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        isSwap = true;
      }
    }
    if(!isSwap){
      return;
    }
  }
}
void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int arr[] = {4, 1, 5, 2, 3};
  int n = 5;
  bubbleSort(arr, n);
  printArray(arr, n);
  return 0;
}
*/
