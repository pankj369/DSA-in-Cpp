#include <iostream>
#include <vector>
using namespace std;

// TODO:
// ! 1. WAF to calculate sum and product of all numbers in an array
// int main()
// {
//   int arr[5] = {1, 2, 3, 4, 5};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   int sum = 0;
//   int product = 1;
//   for (int i = 0; i < size; i++)
//   {
//     sum += arr[i];
//     product *= arr[i];
//   }
//     cout << "sum = " << sum << endl;
//     cout << "product = " << product << endl;

//   return 0;
// }

// ! reverse an array
// void reverseArr(int arr[], int size)
// {
//   int start = 0;
//   int end = size - 1;
//   while (start < end)
//   {
//     swap(arr[start], arr[end]);
//     start++;
//     end--;
//   }
// }
// int main()
// {
//   int arr[5] = {10, 20, 30, 40, 50};
//   int size = 5;
//   reverseArr(arr, size);
//   for (int i = 0; i < size; i++)
//   {
//     cout << arr[i] << " " << endl;
//   }
//   return 0;
// }
// ! 2. WAF to swap the max and min number of an array.
// int main()
// {
//   int arr[5] = {2, 32, 4343, 545, 6};
//   int size = 5;
//   int maxNum = 0;
//   int minNum = 0;
//   // find the index of the max and min elements
//   for (int i = 1; i < size; i++)
//   {
//     if (arr[i] > arr[maxNum])
//     {
//       maxNum = i;
//     }
//     if (arr[i] < arr[minNum])
//     {
//       minNum = i;
//     }
//   }
//   // swap the max and min
//   int temp = arr[maxNum];
//   arr[maxNum] = arr[minNum];
//   arr[minNum] = temp;
//   // print the updated array
//   for (int i = 0; i < size; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   return 0;
// }

// ! 3. WAF to print all the unique values in an array.

// int main()
// {
//   int arr[] = {2, 1, 3, 2, 4, 1, 9, 5, 6, 4, 5}; int size = 11;
//   for (int i = 0; i < size; i++)
//   {
//     int count = 0;
//     for (int j = 0; j < size; j++)
//     {
//       if (arr[i] == arr[j])
//       {
//         count++;
//       }
//     }
//     if (count == 1)
//     {
//       cout << arr[i] << " ";
//     }
//   }
//   return 0;
// }
// ! 4. WAF to print intersection of 2 arrays.

void printIntersection(int arr1[], int size1, int arr2[], int size2)
{
  for (int i = 0; i < size1; i++)
  {
    bool alreadyPrinted = false;
    // step 1:- check if arr1[i] was already printed
    for (int k = 0; k < i; k++)
    {
      if (arr1[i] == arr1[k])
      {
        alreadyPrinted = true;
        break;
      }
    }
    // If already printed, skip to next element
    if (alreadyPrinted)
      continue;

    // step2:- check if arr1[i] is present in arr2
    for (int j = 0; j < size2; j++)
    {
      if (arr1[i] == arr2[j])
      {
        cout << arr1[i] << " ";
        break; // found match, no need to continue
      }
    }
  }
}
int main()
{
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {3, 4, 4, 5, 6};

  int size1 = 5;
  int size2 = 5;

  cout << "Intersection: ";
  printIntersection(arr1, size1, arr2, size2);
  return 0;
}