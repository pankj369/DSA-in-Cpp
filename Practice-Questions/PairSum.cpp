#include <iostream>
#include <vector>
using namespace std;

//* This two pointer includes a sorted array which will not work on unshorted array
/*
vector<int> pairSum(vector<int> &arr, int target)
{
    vector<int> ans; //declaring an empty vector to store output or pairsum value indices
    int size = arr.size();
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        int ps = arr[i] + arr[j];
        if (ps > target)
        {
            j--;
        }
        else if (ps < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1,5,7,11,19};
    int target = 20;
    vector<int> ans = pairSum(arr, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}

*/

// !Majority Elements -brute force
/*
int majorityElement(vector<int>& arr){
    int n=arr.size();
    for(int val : arr){
        int freq=0;
        for(int elem : arr){
            if(elem== val){
                freq++;
            }
        }
        if(freq>n/2){
            return {val};
        }
    }
}
int main(){
    vector <int> arr={1,1,3,1,1,1,4,3,4,1,5};
    cout<<"Majority Elements is : "<<majorityElement(arr);;
    return 0;
}

*/

// !  Majority element using shorting

#include <algorithm>
int majorityElement(vector<int> &arr)
{
    int n = arr.size();
    // sort
    sort(arr.begin(), arr.end());

    // freq count
    int freq = 1, ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = arr[i];
        }
        if (freq > n / 2)
            return ans;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 1, 1, 14, 1, 1, 2, 5, 3};
    cout << majorityElement(arr);
    return 0;
}