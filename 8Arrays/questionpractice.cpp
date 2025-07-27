#include <iostream>
#include <climits>
using namespace std;

// ! 1. WAF to calculate sum and product of all numbers in an array
/*
int main()
{
  int arr1[] = {1, 2, 3, 4, 5};
  int size = 5;
  int sum = 0;
  int product = 1;
  for (int i = 1; i <= size; i++)
  {
    sum += i;
    product *= i;
  }
  cout << "Sum of an array is : " << sum << endl;
  cout << "Product of an array is : " << product << endl;
}
*/
// ! 2. WAF to swap the max and min number of an array.
/*
int main(){
  int arr[]={-13,23,43,94,-5};
  int size=sizeof(arr)/sizeof(arr[0]); //it automatically adapts to array size
//*   int size=5;// this is fine onlye when we know the array size manually and it will never change but if our array changes , we will also have to manuallly change size=... that's not safe for real world code
// int smallest=INT_MAX; int largest=INT_MIN; //not scaleable
  int smallest=arr[0]; //best for beginners and makest our code safe and accurate for arrays containing negative numbers or very large numbers, or even just 1 elements
  int largest=arr[0];
  //step 1. find the largest and smallest value
  for(int i=1; i<size; i++){
    if(arr[i]<smallest){
      smallest=arr[i];
    }
    if(arr[i]>largest){
      largest=arr[i];
    }
  }
    // Step 3: Print updated array
    cout << "Array after swapping smallest and largest values: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
 */
// ! 3. WAF to print all the unique values in an array.
/*
int main(){
  int arr[]={2,1,3,4,5,6,3,2,4,18,7,8,8,};
  int size=sizeof(arr)/sizeof(arr[0]);
  cout<<"unique values : " ;
  for(int i=0; i<size; i++){
    int count=0;
    for(int j=0; j<size; j++){//inner loop to compare i with all elements
      if(arr[i]==arr[j]){//if elements matches
        count++; //increase the count
      }
    }
    if(count==1){//if count is exactly 1, means element is unique
      cout<<arr[i]<<" ";//print unique elements
    }
  }
}
*/
// ! 4. WAF to print intersection of 2 arrays.
//* in this code duplicate is found 
int main()
{
  int arr1[] = {1, 2, 3, 4, 5, 2};
  int arr2[] = {2, 4, 6, 2, 8};
  int size1 = 6;
  int size2 = 5;
  //to track if an element in arr2 is already matched
  bool visited[100]={false};
  
  cout << "Intersection: ";

  for (int i = 0; i < size1; i++)
  {
    for (int j = 0; j < size2; j++)
    {
      if (arr1[i] == arr2[j] && !visited[j])
      {
        cout << arr1[i] << " ";
        visited[j]=true; //mark as matched
        break;
      }
    }
  }
  return 0;
}