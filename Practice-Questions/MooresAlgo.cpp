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
int main()
{
    vector<int> arr = {5, 6, 7, 5, 6, 7, 5, 5, 5, 5, 5};
    cout << majorityElement(arr);
    return 0;
}