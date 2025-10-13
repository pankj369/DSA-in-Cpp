#include <iostream>
using namespace std;
/*
int main()
{
    int  marks[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};   // INITIALIZING AN ARRAY
    cout << "First element: " << marks[0] << endl;  // accessing the first element of an array
    cout << "Second element: " << marks[1] << endl; // accessing second element of an array
    cout << marks[100 - 1] << endl;                 // accessing last element of an array
    cout << sizeof(marks)<<en dl; // returns size in bytes
    cout << sizeof(marks) / sizeof(int) << endl; // returns number of elements
    double prince[51] = {45.56, 195.45, 256.5, 789.5};

    char letter[5];
    return 0;
}
    */
//* learn about loop in array

// ! Find the largest and smallest number in an array
/*
int main()
{
    int nums[] = {5, 15, 22, 1, -15, 21};
    int size = 6;
    int smallest = INT8_MAX; // intialising smallest - to compare  form +ve infinite
    int largest = INT8_MIN;  // intialising largest - to compare form -ve infinty
    //use loop
    for (int i = 0; i < size; i++)
    {
        // if(nums[i]<smallest){
        //     smallest=nums[i];
        // }
        //* min is a prebuild function  - to find the min value from two given value and this is the shorter way compare two value
        smallest = min(nums[i], smallest);
        //* max is also a prebuild function - to find the max value from the given two value by comapring - shorter way to compare
        largest = max(nums[i], largest);
    }
    cout << "Smallest = " << smallest[i] << endl;
    cout << "Largest = " << largest[i] << endl;
    return 0;
}
    */

// ! Linear Search-
/*
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 8, 56, 7, 4, 95, 665};
    int size = 7;
    int target = 95;
    cout << "Target is found at index : " << linearSearch(arr, size, target) << endl;
    return 0;
}
*/

// !reverse an array

void reversedArray(int arr[], int size)
{
    int st = 0, end = size - 1;
    while (st <= end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    reversedArray(arr, size);
    for (int i = 0; i <= size-1; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}