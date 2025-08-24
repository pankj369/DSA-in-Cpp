#include <iostream>
using namespace std;

void printDigits(int n){
  // int count=0;/
  int sum=0;
  while(n!=0){
    int digit= n%10;
    // cout<<digit<<endl;
    // count++; //to print total number of digits
    sum +=digit; //to print sum of all digits in a number
    n=n/10;
  }
  // cout<<count<<endl;
  cout<<sum<<endl;
}


int main(){
int n=3568;

printDigits(n);
return 0;

}