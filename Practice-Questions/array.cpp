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
/*
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

*/

// !WAF to calculate sum and product of all numbers in an array
/*

int main()
{
    int arr[] = {4, 5, 6};
    int size = 3;
    int sum = 0;
    int product = 1;
    for (int i = 0; i <= size - 1; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum : " << sum << endl;
    cout << "Product : " << product << endl;
    return 0;
}
*/
// * again using seperate function
/*
void sumAndProdcut(int arr[], int size){
    int sum=0;
    int product=1;

    for(int i=0; i<size; i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"Sum of an arrya Elements : "<<sum<<endl;
    cout<<"Product of an array Elements : "<<product<<endl;
}
int main(){
    int arr[]={4,5,6};
    int size=3;
    sumAndProdcut(arr,size);
    return 0;
}
    */
// !WAF to swap the max & min number of an array
#include <climits> //for large bit integers size greater that 8 bits atleast
                   /*
                   void swapMaxMin(int arr[], int size)
                   {
                       int maxIndex = 0, minIndex = 0;
                       for (int i = 0; i < size; i++)
                       {
                           if (arr[i] > arr[maxIndex])
                               maxIndex = i;
                           if (arr[i] < arr[minIndex])
                               minIndex = i;
                       }
                       swap(arr[maxIndex], arr[minIndex]);
                       cout << "Array after swapping max and min: ";
                       for (int i = 0; i < size; i++)
                           cout << arr[i] << " ";
                   }
                   int main()
                   {
                       int arr[] = {45, 7989, 12, -549, 6478, -46414921};
                       int size = 6;
                       swapMaxMin(arr, size);
                       return 0;
                   }
                   */

// !WAF to print all the unique values in an array
/*
void printUnique(int arr[], int size)
{
    cout<<"Unique Elements : ";
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 1)
            cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 1, 2, 4, 3, 1, 4, 8};
    int size = 10;
    printUnique(arr, size);
    return 0;
}
*/

// !WAF to print intersection of 2 arrays
void intersection(int arr1[], int size1, int arr2[], int size2)
{
    cout << "Intersection : ";
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
            }
        }
    }
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {3, 4, 5, 6, 7};
    int size1 = 6;
    int size2 = 5;
    intersection(arr1, size1, arr2, size2);
    return 0;
}