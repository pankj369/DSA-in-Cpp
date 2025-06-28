#include <iostream> //includes the input/output stream library
#include <vector> //include the vector library and allow use to use the vector data structure
using namespace std; //avoid writing std:: before cout, vector etc. makes code cleaner

// int main()
// {
//   // vector<int> vec;
//   // vector<int> vec = {1, 2, 3};
//   // vector<int> vec(5, 0); // 5 is size of the vector and 0 is idx value
  // ! for each loop
//   // vector<char> vec={'a', 'b', 'c', 'd',};
  //!vector function
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

  // int main(){
  //   vector<int> &nums ={4,1,2,1,2};
  //   int ans=0;

  //   for(int val :nums){
  //     ans=ans^val;
  //     cout<<nums;
  //   }
  //   return ans;
  // }
  // TODO
  // ! linear search code on vector
    int main(){ //entry point of the program all logic starts form here
    vector<int> v={10,20,30,40,50}; //declares a vector of intergers named v.
    int key=30; //this is our target/ number we want to serch for in the vector
    bool found=false;
    //linear search
     for( int i=0; i<v.size(); i++){//this loop goes through each element of the vector and v.size() returns the no of elements in the vector
      if(v[i]==key){ //compare the currElem v[i] with the key
         cout << "Element " << key << " found at index " << i << endl;
            found = true;
            break;
      }
    }
      if (!found) {
        cout << "Element " << key << " not found in the vector." << endl;
    }
    return 0;
  }
  // !reverse code on function then pass it to vector
  
  