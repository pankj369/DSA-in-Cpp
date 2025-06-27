#include <iostream>
#include <algorithm> //for swap
using namespace std;

// int main(){
// int marks[5]={98,78,85,88,64}; //array is initilaized with some value
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
// cout<<marks[4]<<endl;
// marks[2]=100;//change value at index 2;
// cout<<marks[2]; //value change
// cout<<marks[-1];

// ! how to find the size of an array
// int size=5; //it is generally given
// *step= find the sizeof marks then divide it with size of int, u will get the size of array
// cout<<sizeof(marks)/sizeof(int)<<endl;

// ! loops 0-size-1
// ?this is how we print the output of the arrray
//   for(int i=0; i<size; i++){
//     cout<<marks[i]<<endl;
//   }
// return 0;
// }
// ? how to print the input of an array
// int main(){
// int size=5;
// int marks[size];
// for(int i=0; i<size;i++){
//   cin>>marks[i];
// }
// for(int i=0; i<size; i++){
//   cout<<marks[i]<<endl;
// }
// return 0;
// }
//! loops on arrays
//! find smallest/largest in array

// int main()
// {
//   int nums[] = {5, 115, 22, 1, -15, 24};
//   int size = 6;
//   int smallest = INT_MAX;  // 2147483647
//   int largest = INT_MIN;   // -2147483648
//   for (int i = 0; i < size; i++)
//   {
//     //*the shortest way to find out the mininum/maximum of an array is to use the min/max function
//     smallest = min(nums[i], smallest);
//     largest = max(nums[i], largest);
//     // if(nums[i]<smallest){
//     //   smallest=nums[i];
//     // }
//   }
//   cout << "smallest " << smallest << endl;
//   cout << "largest " << largest << endl;
//   return 0;
// }
// TODO: print the index of largest and smallest numeber

// !Pass by reference

// int changeArr(int arr[], int size){
//   cout<<"In function\n";
//   for(int i=0; i<size; i++){
//     arr[i]=2*arr[i];
//   }
// }
// int main(){
//   int arr[]={1,2,3};

//   changeArr(arr,3);
//   cout<<"In main\n";

//   for(int i=0; i<3; i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
//   return 0;
// }
// !linear search
// int linearSearch(int arr[], int size, int target)
// {
//   for (int i = 0; i < size; i++)
//   {
//     if (arr[i] == target)
//       return 1;
//   }
//   return -1;
// }
// int main()
// {
//   int arr[] = {4, 2, 7, 8, 2, 3, 4};
//   int size = 7;
//   int target =4;
//   cout << linearSearch(arr, size, target) << endl;
//   return 0;
// }

// !Reverse an array

void reverseArr(int arr[], int size)
{
  int start = 0;
  int end = size - 1;
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
int main()
{
  int arr[] = {4, 3, 5, 6, 2, 6, 3};
  int size = 7;
  reverseArr(arr, size);
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
// TODO: 
// ! 1. WAF to calculate sum and product of all numbers in an array
// ! 2. WAF to swap the max and min number of an array.
// ! 3. WAF to print all the unique values in an array.
// ! 4. WAF to print intersection of 2 arrays.