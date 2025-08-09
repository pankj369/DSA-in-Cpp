#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int>& arr1, int m, vector<int>& arr2, int n) {
    int idx = m + n - 1;  // last index of merged array
    int i = m - 1;        // last element of initial arr1
    int j = n - 1;        // last element of arr2

    // Merge from the end
    while (i >= 0 && j >= 0) {
        if (arr1[i] >= arr2[j]) {
            arr1[idx--] = arr1[i--];
        } else {
            arr1[idx--] = arr2[j--];
        }
    }

    // If arr2 still has elements left
    while (j >= 0) {
        arr1[idx--] = arr2[j--];
    }
}

int main() {
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {2, 5, 6};

    int m = 3; // valid numbers in arr1
    int n = arr2.size();

    mergeSort(arr1, m, arr2, n);

    // ✅ Correct printing
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}
