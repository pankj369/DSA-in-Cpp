#include <iostream>
#include <climits> // it is a header file that provides the limits (min and max values) of fundamental integer types like int short long etc

using namespace std;

//*data structure is the structure in our code while programing which is used to store data in a structured way, it is basically a fuel  for development/ programming, DS can be linear, hierachial etc.
//*algorithms= the efficient operation on data which is used to performed is called algorithms, for eg- sort, backtracking etc.
//!array-  is the first data strucuture.
/*  
int main(){

  int size=5; 
  int arr[size];


  for(int i=0; i<size; i++){
    cin>>arr[i];
  }
  //loops : 0 to size-1
  for (int i=0; i<size; i++){
    cout<<arr[i]<<endl;
  }
  */

  // !find the smallest/
  /*
  //logic ye hai ki- yaha hum compare kr rhe hai nums me jo elements hai usko smallest se aur smallest ko assign kiya gya hai + infinity se kiyuki +infinity ka matlab h largest possible value aur jb largest possible value ko kisi v value ko compare krenge to wo smallest hoga 
  int nums[] = {5,15,22,1,-15, 24};
  int size=6;
  int smallest=INT_MAX;//+ infinity
  for(int i=0; i<size; i++){
    if(nums[i]<smallest){// here i use nums[i] because it is used to access each element/value of the array one by one during the loop
      //while nums refers to the address of the array in memory- not any specific element, so we need to use nums[i] to get the value at index i.
      smallest=nums[i];
    }
  }
  cout<<"smallest : "<<smallest<<endl;
  */
//! find the largest
/*
  int marks[]={54,12,46,5,75,99};
  int size=6;
  int largest=INT_MIN;
  for(int i=0; i<size; i++){
    // * use min and max instead of if-else
    largest=max(marks[i], largest);

    // if(marks[i]>largest){
    //   largest=marks[i];
    // }
  }
   cout<<"largest : "<<largest<<endl;
   */

   //!find the index of largest/smallest value of an array
   /*
    int nums[]={-1245,-54,54,79879,34};
    int size=5;
    
    int smallest=INT_MAX;
    int smallIndex=-1; //-1 is an invalid index or it is a bydefault number when the answer is not find
    int largest=INT_MIN;
    int largeIndex=-1;

    for(int i=0; i<size; i++){
      if(nums[i]<smallest){
        smallest=nums[i];
        smallIndex=i;
      }
      if(nums[i]>largest){
        largest=nums[i];
        largeIndex=i;
      }
    }
    
    cout<<"Smallest : "<<smallest<<endl;
    cout<<"Index of smallest Number : "<<smallIndex<<endl;

    cout<<"Largest : "<<largest<<endl;
    cout<<"Index of largest number : "<<largeIndex<<endl;

  return 0;
}
  */
 
//! Pass by reference-The actual variable is passed using its memory address. so changes made inside the function affect the original variable
/*
void changeArr(int arr[], int size){
  cout<<"In functin"<<endl;
  for(int i=0; i<size; i++){
    arr[i]=2*arr[i];
  }
}
int main(){
  int arr[]={1,2,3};
  changeArr(arr, 3);
  cout<<"In main\n";
  for(int i=0; i<3; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
  */

//! Linear search- simplest search algorithm 
/*
int linearSearch(int arr[],int size, int key){
for(int i=0; i<size; i++){
if(arr[i]==key){
  return i;
}
}
return -1;
}
int main(){
  int arr[]={4,2,5,6,72,42};
  int size=6;
  int key=6;
  cout<<linearSearch(arr, size,key)<<endl;
}
*/
//!How to reverse an array (using 2 pointer variables)
void reverseArray(int arr[], int size){
  int start=0; 
  int end=size-1;
  while(start<end){
    //swap elements
    swap(arr[start],arr[end]);
    //pointers
    start++;
    end--;

  }
}
int main(){
  int arr[]={4,2,7,8,1,2,5};
  int size=7;
  reverseArray(arr, size);
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}