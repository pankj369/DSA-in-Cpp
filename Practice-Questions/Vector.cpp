#include <iostream>
#include <vector> //
using namespace std;
/*
int main()
{
    // vector<int> vec;             // initialise 1
    // vector<int> vec = {1, 2, 3}; // initialise2
    vector<int> vec = {3, 0,5,7,8,9,2,17,2,46,987,254};   // initialise3
    // print value using for each loop
    for(int val :vec){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Size : "<<vec.size()<<endl;
    vec.push_back(15);
    cout<<"Push back : "<<vec.size()<<endl;
    // cout<<"Pop back : "<< vec.pop_back()
    vec.pop_back();
    cout<<vec.size()<<endl;
    // vec.front();
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;

    return 0;
}
*/

//! Reverse an array using two pointers approch and also use vector
/*
void reversedArray(vector <int> &arr){
    int st=0;
    int end=arr.size()-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}

int main(){
    vector<int> arr={6,5,4,3,2,1};

    cout<<"Original array: ";
    for(int i : arr){
        cout<<i<<" ";
    }
    reversedArray(arr);

    cout<<"\nReversed array: ";
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
*/

//! finding unique or single number
/*
int uniqueNum(vector<int>&arr){
    int ans=0;
    for(int num : arr){
      ans^=num;
    }
    return ans;
}
int main(){
    vector<int>arr={1,4,2,5,4,2,1};
    int size=5;
    cout<<uniqueNum(arr);
    return 0;
}
*/

//! linear search
int linearSearch(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
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
    vector<int> arr = {7, 5, 6, 8, 3, 2, 48, 54, 6};
    int size = 9;
    int target = 8;
    cout << "Target found at index : " << linearSearch(arr, target);
    return 0;
}