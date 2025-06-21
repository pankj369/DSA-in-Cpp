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

//! Note:- sum is always initialize with 0;
// !while factorial is always initialize with 1;
//?calculate N factorial
// int factN(int n){
//   int fact=1;
// for(int i=1; i<=n; i++){
//   fact*=i;
// }
// return fact;
// }
// int main(){
//   cout<<"Factorial of N: "<<factN(5)<<endl;
//   return 0;
// }

// !function in memory
//?we have two types of memory :- stack and heap
// pass by value

//? calculate the sum of digits of a number.

// int sumOfDigits(int n){
//   int sum=0;
//   while (n>0)
//   {
//     int digit=n%10;
//     sum+=digit;
//     n/=10;
//   }
//   return sum;
// }
// int main(){
//   int number;
//   cout<<"Enter a number: ";
//   cin >> number;
//   int  result =sumOfDigits(number);
//   cout<<"Sum of Digits = "<<result<<endl;
//   return 0;
// }
//? again
// int sumDigit(int num)
// {
//   int digiSum = 0;
//   while (num > 0)
//   {
//     int lastDigit = num % 10;
//     num /= 10;

//     digiSum += lastDigit;
//   }
//   return digiSum;
// }
// int main()
// {
//   cout << sumDigit(145) << endl;
//   return 0;
// }

// ! Calculate nCr binomial coefficient for n & r

int factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

int nCr(int n, int r){
  int fact_n=factorial(n);
  int fact_r=factorial(r);
  int fact_nmr=factorial(n-r);
  return fact_n/(fact_r * fact_nmr);
}

int main(){
  int n=8, r=2;
  cout<<nCr(n,r)<<endl;
  return 0;
}