#include <iostream>
using namespace std;
 
// int printHello(){ //function definition/define
//  cout<<"Hello!\n";
//  return 3;
// }

// int main(){ 
//  int val= printHello(); //function invoke or call
//  cout<<"Value:"<<val<<endl;
//   return 0;
// }
//?sum of two numbers 
// int sum(int a, int b) { //parameters
//   int sum=a+b;
//   return sum;
// }
// int main(){
//  cout<< sum(4,5)<<endl; //arguments
//   return 0;
// }

//?min of 2 numbers
// int minOfTwo(int a, int b){
//   if(a<b){
//     return a;
//   }else {
//     return b;
//   }
// }
// int main(){
//   cout<<"Min of two number is : "<<minOfTwo(5,34)<<endl;
//   return 0;
// }

//?calculate the sum of numbers form 1 to n;
// int sumOfNum(int n){
//   int sum=0;
//   for(int i=1; i<=n;i++){
//     sum+=i;
//   }
//   return sum;
// }
// int main(){
//   cout<<sumOfNum(10)<<endl;
//   return 0;
// }

//!Note:- sum is always initialize with 0;
// !while factorial is always initialize with 1;
//?calculate N factorial
int factN(int n){
  int fact=1;
for(int i=1; i<=n; i++){
  fact*=i;
}
return fact;
}
int main(){
  cout<<"Factorial of N: "<<factN(5)<<endl;
  return 0;
}


