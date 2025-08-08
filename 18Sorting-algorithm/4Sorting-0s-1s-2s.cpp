#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
// !Brute force
void sortArray(vector<int>& nums){
  int n =  nums.size();
  int count0=0, count1=0, count2=0;
  // O(n)
  for(int i=0; i<n; i++){
    if(nums[i]==0) count0++;
      else if(nums[i]==1) count1++;
      else count2++;
  }
  // O(n) =for all 3 loops given below :-
  int idx=0;
  for(int i=0; i<count0; i++){
    nums[idx++]=0;
  }
  for(int i=0; i<count1; i++){
    nums[idx++]=1;
  }
  for(int i=0; i<count2; i++){
    nums[idx++]=2;
  }
}
int main(){
  vector<int> nums={2,0,2,1,1,0,1,2,0,0};
 int n=nums.size();
  sortArray(nums);

  for(int num :  nums){
    cout<<num<<" ";
  }
  cout<<endl;
  return 0;
}
  */

  // !Dutch National flag algorithm - we can sort the numbers in a particular order with O(n) time complexity with single pass
  
  void sortColors(vector<int>& nums){
    int n= nums.size();
    int low=0, mid = 0, high=n-1;

    while(mid<=high){
      if(nums[mid]==0){
        swap(nums[low], nums[mid]);
        mid++;
        low++;
      }else if(nums[mid] ==1){
        mid++;
      }else{
        swap(nums[high], nums[mid]);
        high--;
      }
    }
  }

  int main(){
    vector<int> nums={2,1,0,2,0,1};
    sortColors(nums);

    for(int i=0; i<nums.size(); i++){
      cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
  }