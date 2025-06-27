#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//   // vector<int> vec;
//   // vector<int> vec = {1, 2, 3};
//   // vector<int> vec(5, 0); // 5 is size of the vector and 0 is idx value
//   // ! for each loop
//   // vector<char> vec={'a', 'b', 'c', 'd',};
//   //!vector function
//   cout << "size = " << vec.size() << endl; // size function
//   // vec.push_back('e');
//   vec.push_back(4);
//   cout << "size after push back = " << vec.size() << endl;
//   vec.pop_back();
//   cout << "size after pop back = " << vec.size() << endl;
//   // vec.front();
//   cout << "size after using front = " << vec.front() << endl;
//   // vec.back();
//   cout << "size after using back = " << vec.back() << endl;
//   // vec.at[0];
//   cout << "value at required index = " << vec.at(1) << endl;
//   for (int val : vec)
//   { // here i is not the index but the value on the index and vec is the vector name
//     cout << val << endl;
//   }
   
//   return 0;
// }

  // ! static and dynamic allocaiton

  // int main(){
  //   vector<int> vec;
  //   vec.push_back(0);
  //   vec.push_back(1);
  //   vec.push_back(2);
  //   vec.push_back(3);
  //   vec.push_back(4);
  //   cout<<vec.size()<<endl;
  //   cout<<vec.capacity()<<endl;
  //   return 0;
  // }

  // ! single number
  // solve this problem on leetcode

  int main(){
    vector<int> &nums ={4,1,2,1,2};
    int ans=0;

    for(int val :nums){
      ans=ans^val;
      cout<<nums;
    }
    return ans;
  }
  // TODO
  // ! linear search code on vector
  // !reverse code on function then pass it to vector
  