#include <iostream>
#include <vector>
using namespace std;

int main()
{
  /*
  vector<int> vec = {1, 2, 3}; // initialize
  cout << vec[2] << endl;
  vector<int> vect(3, 0); // 3 is size of vector and 0 is value on each index i.e.; 0 0 0
  cout << vect[0] << endl;
  cout << vect[1] << endl;
  cout << vect[2] << endl;
  //*syntax of writing for each loop on vectors
  for (int i : vec)
  {
    cout << i << endl;
  }
  
  vector<string>vecString={"Pankaj", "singh"};
  for(string value : vecString){
    cout<<value;
  }
*/
  //!vector functions
  /*
  //1.size
    vector<int> vec = {25,45,87,94,-15};
    cout<<"size : "<<vec.size()<<endl;
  //2.push_backv (adding at the last)
    vec.push_back(4);
    cout<<"Size after push_back : "<<vec.size()<<endl;
    for(int val : vec){
      cout<<val<<" ";
    }
    cout<<endl;
    //3.pop_back (deleting from last)
    vec.pop_back();
    cout<<"Size after pop_back : "<<vec.size()<<endl;
    //4.front -  get the first value
    cout<<"front value : "<<vec.front()<<endl;
    //5.back - get the last value
    cout<<"back value : "<<vec.back()<<endl;
    //6. at - get the exact index value
    cout<<"perticular index : "<<vec.at(3);
    */
  //  ! Static and dynamic memory allocation
 /*
  vector<int>vec;
  vec.push_back(0);
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  cout<<vec.size()<<endl;
  cout<<vec.capacity()<<endl;
  */
// ? first leet code question number 136. 
  //!linearsearch code on vector
  //! reverse code on vector in functions (seperate functions )
  return 0;
}