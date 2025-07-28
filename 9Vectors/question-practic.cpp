#include <iostream>
#include <vector>
using namespace std;

// int main(){
  /*
  vector<int> arr={23,34,52,12,7};
  int key;
  cout<<"Enter the element to search : ";
  cin>>key;
  for(int i=0; i<arr.size();i++){
    if(arr[i]==key){
      cout<<"Element found at index : "<<i<<endl;
    }
  }
    */
   //!write a program to input n elements in a vector and search for a given element using linear search.
   /*
   vector<int> arr;
   int n, key;
   cout<<"Enter number of elements : ";
   cin>>n;
   cout<<"Enter the elements : ";
   for(int i=0; i<n; i++){
    int val;
    cin>>val;
    arr.push_back(val);
   }
   cout<<"Enter the element to search : ";
   cin>>key;
   
   for(int i=0; i<arr.size(); i++){
    if(arr[i]==key){
      cout<<"Elements found at index : "<<i<<endl;
    }
   }*/
   //!find index of first and last occurance
   /*
   vector<int> arr={5,7,2,9,2,4};
   int key=2;
   int first=-1, last=-1;
   for(int i=0; i<arr.size(); i++){
    if(arr[i]==key){
      if(first == -1){
        first=i; //first time match;
      }
      last=i; //keep updating last;
    }
   }
   if(first!=-1){
    cout<<"First occurance at index : "<<first<<endl;
    cout<<"Last occurance at index : "<<last<<endl;
   }else{
    cout<<"Element not found."<<endl;
   }
   */
   //!write a program to count how many times a given elements occurs in the vector
   //! input a vector and a key. PRint all indices where the key is found
   /*
   //both question solution in one 
   vector<int> arr; 
   int key, n;
   cout<<"Enter the size of the vector : ";
   cin>>n;

   cout<<"Enter "<<n<<" elements : ";
   for(int i=0; i<n; i++){
    int value; 
    cin >>value;
    arr.push_back(value);
   }
   cout<<"Enter the key to search : ";
   cin>>key;
   int count=0;
   cout<<"key found at indices : ";
   for(int i=0; i<arr.size(); i++){
    if(arr[i]== key){
      cout<<i<<" ";
      count++;
    }
   }
   cout<<endl<<"key occured "<<count<<" times."<<endl;

  return 0;
}
     */
  //!Write a function to reverse te vector
  //function to reverse the vector
  void reverseVector(vector<int> &arr){
    int start=0;
    int end=arr.size()-1;

    while(start<end){
      //swap elements
      swap(arr[start], arr[end]);
      start++;
      end--;
    }
  }
  //main function
  int main(){
    int n;
    cout<<"Enter the size of the vector : ";
    cin>>n; 
    vector<int> arr(n);
    cout<<"Enter "<<n<< " elements : ";
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    //call the reversefunction
    reverseVector(arr);
    //print reverse array
    cout<<"Reversed array : ";
    for(int i=0; i<arr.size(); i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
  }