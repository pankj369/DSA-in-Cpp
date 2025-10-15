#include <iostream>
#include <vector>

using namespace std;

//? Majority Element using Moore's Voting Algorithem

int majorityElement(vector<int> &arr)
{
    int freq = 0;
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (freq == 0)
        {
            ans = arr[i];
        }
        if (ans == arr[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int majorElem_moore(vector<int> &arr1)
{
    int n1 = arr1.size();
    int count = 0;
    int candidate = -1;

    // for each loop to travese the array
    for (int num : arr1)
    {
        if (count == 0)
        {
            candidate = num;
            count = 1; // reset count
        }
        else if (num == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    // verify candidate;
    count = 0;
    for (int num : arr1)
    {
        if (num == candidate)
            count++;
    }
    if (count > n1 / 2)
        return candidate;
    else
        return -1;
}
int main()
{
    vector<int> arr = {5, 6, 7, 5, 6, 7, 5, 5, 5, 5, 5};
    cout << majorityElement(arr);

    vector<int> arr1 = {5, 6, 7, 5, 6, 7, 5, 5, 5, 5, 5};
    cout << "\nMojority Elem using moore's algo : " << majorityElement(arr1);

    return 0;
}