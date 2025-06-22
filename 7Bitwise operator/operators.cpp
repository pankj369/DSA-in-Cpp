#include <iostream>
using namespace std;

//? Unary > *, /, % > +, - > <<, >> > Relational > Equality > Bitwise > Logical > Assignment
// operator precedence
// !scope:-it is an area or a region of program where a variables, functions, objects are accessible.
// data types modifiers
// int main(){
//   // signed int a=-40;
//   // signed int b=3;
//   unsigned int a = 250;
//     // unsigned int b = -10; //  Error! Negative not allowed
//     cout << "Unsigned a: " << a << endl;
//     //know the bit size of data-type modifiers
// cout << sizeof(int) << endl;
// cout << sizeof(short) << endl;
// cout << sizeof(long) << endl;
// cout << sizeof(long long) << endl;
//   // cout<<a<<endl<<b<<endl;
//   return 0;
// }
// !figure out how to find if a number is power of 2 without any loop

// int main()
// {
//   // int n = 32;
//   // int result = (n > 0) && ((n & (n - 1)) == 0);
//   // cout << (result ? "yes, power of 2" : "no, not power of 2");
//   int res=9 & 10;
//   cout<<res<<endl;
//   return 0;
// }

// !waf to reverse an integer n

int reversedNumber(int n){
  int reversed=0;
  while(n>0){
    int digit=n%10; //get last digit
    reversed= reversed*10+digit; //shift and add digit
    n=n/10;
  }
  return reversed;
}
int main(){
  int n=1234;
  cout<<reversedNumber(n)<<endl;
}