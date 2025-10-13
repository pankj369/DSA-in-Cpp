#include <iostream>
#include <vector> //
using namespace std;

int main()
{
    // vector<int> vec;             // initialise 1
    // vector<int> vec = {1, 2, 3}; // initialise2
    vector<int> vec = {3, 0,5,7,8,9,2,17,2,46,987,254};   // initialise3
    // print value using for each loop
    for(int val :vec){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Size : "<<vec.size()<<endl;
    vec.push_back(15);
    cout<<"Push back : "<<vec.size()<<endl;
    // cout<<"Pop back : "<< vec.pop_back()
    vec.pop_back();
    cout<<vec.size()<<endl;
    // vec.front();
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    
    return 0;
}