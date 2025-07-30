#include <iostream>
#include <climits>
using namespace std;

// how to print subarray
// int main()
// {
//   int arr[5] = {1,2,3,4,5};
//   int n = 5;
//   for (int st = 0; st < n; st++)
//   {
//     for (int end = st; end < n; end++)
//     {
//       for (int i = st; i <= end; i++)
//       {
//         cout << arr[i];
//       }
//       cout << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// ! maximum subarray sum
// * brute force approach
int main() {
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;
    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++) {
        int currSum = 0;
        for (int end = st; end < n; end++) {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "Maximum subarray sum: " << maxSum << endl;
    return 0;
}

// !Kadane's Algorithm
//* most optimised
// int main()
// {
//   int arr[7] = {3, -4, 5, 4, -1, 7, -8};
//   int n = 7;
//   int currSum = 0;
//   int maxSum = INT_MIN;
//   for (int i = 0; i < n; i++)
//   {
//     currSum += arr[i];
//     maxSum = max(currSum, maxSum);
//     if (currSum < 0)
//       currSum = 0;
//   }
//   cout << maxSum << endl;
//   return 0;
// }
