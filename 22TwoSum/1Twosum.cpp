#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &arr, int target)
{
    unordered_map<int, int> m;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int first = arr[i];
        int sec = target - first;

        if (m.find(sec) != m.end())
        {
            ans.push_back(i);
            ans.push_back(m[sec]);
        }
        m[first] = i;
    }
    return ans;
}

int main()
{
    vector<int> arr = {5, 2, 11, 7, 15};
    int target = 9;
    vector<int> res = twoSum(arr, target);
    if (!res.empty())
    {
        cout << "Indices: " << res[0] << ", " << res[1] << endl;
    }
    else
    {
        cout << "No pair found!" << endl;
    }
    return 0;
}