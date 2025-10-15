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
    return -1; //for no majority
}
int main(){
    vector <int> arr={1,1,3,1,1,1,4,3,4,1,5};
    cout<<"Majority Elements is : "<<majorityElement(arr);;
    return 0;
}

*/
//! Majority Element using hash- map (unordered map)
#include <unordered_map>
int majorElem_hashmap(vector<int> &arr1)
{
    unordered_map<int, int> freq; // key=element and value=frequency
    // step1 - count frequency
    for (int num : arr1)
    {
        freq[num]++;
    }
    // step2- finding element having frequency > n/2
    int s = arr1.size();
    for (auto pair : freq)
    // we write auto instead of  pair<const int, int> this beacause this is a bit long and hard to write every time
    {
        if (pair.second > s / 2)
        {
            return pair.first;
        }
    }
    return -1;
}

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

// we can also find out the majority element using sorting
int majorElem_shorting(vector<int> &arr2)
{
    int s1 = arr2.size();
    sort(arr2.begin(), arr2.end());
    int n_of_num = arr2[s1 / 2]; // finding middile elem after sorting

    int count = 0;
    for (int val : arr2)
    {
        if (val == n_of_num)
        {
            count++;
        }
    }

    if (count > s1 / 2)
    {
        return n_of_num;
    }
    else
    {
        return -1;
    }
}
int main()
{
    vector<int> arr = {1, 1, 1, 14, 1, 1, 2, 5, 3};
    // cout << majorityElement(arr);
    vector<int> arr1 = {1, 1, 1, 14, 1, 1, 2, 5, 3};
    cout << "Majority element using hash Map : " << majorElem_hashmap(arr1);
    vector<int> arr2 = {1, 1, 1, 14, 1, 1, 2, 5, 3};
    cout << "\nMajority elem using sorting : " << majorElem_shorting(arr2);

    return 0;
}