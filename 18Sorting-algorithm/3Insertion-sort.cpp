#include <iostream>
#include <algorithm>

using namespace std;
// !insertion sort - 
// !TIme complexity = O(n^2)
void insertionSort(int arr[], int n)
{

  for (int i = 1; i < n; i++)
  {
    int curr = arr[i];
    int prev = i - 1;

    while (prev >= 0 && arr[prev] > curr)
    {
      arr[prev + 1] = arr[prev];
      prev--;
    }
    arr[prev + 1] = curr; // placing the curr elem in its correct position
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
  int n = 5;
  int arr[] = {4, 1, 5, 2, 3};

  insertionSort(arr, n);
  printArray(arr, n);
  return 0;
}