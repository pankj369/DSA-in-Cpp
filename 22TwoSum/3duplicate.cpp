#include <iostream>
#include <vector>
// #include <unordered_set>

using namespace std;

/*
vector<int> findDuplicate(vector<vector<int>>& nums){
    unordered_set<int> s;

    for(int val : nums){
        if(s.find(val) != s.end()){
            return val;
        }
        s.insert(val);
    }
    return -1;
}
*/
int findDuplicate(vector<int> &arr)
{
    int slow = arr[0], fast = arr[0];

    do
    {
        slow = arr[slow];      //+1;
        fast = arr[arr[fast]]; //+2;
    } while (slow != fast);

    slow = arr[0];

    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}
int main()
{
    vector<int> arr = {1, 3, 4, 2, 2};
    cout << findDuplicate(arr) << endl;
    return 0;
}