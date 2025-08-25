#include <iostream>
#include <cmath>

using namespace std;
//! GCD or HCF with Euclids algorithm
/*
int gcd(int a, int b){
  while(a>0 && b>0){
    if(a>b){
      a=a%b;
    }else{
      b=b%a;
    }
  }
  if(a==0) return b;
  return a;
}

int main(){
  cout<<gcd(20,28)<<endl;
  return 0;
}
  */

// !LCM with Euclids algo

int gcd(int a, int b)
{
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
int lcm(int a, int b)
{
  int g = gcd(a, b);
  return (a * b) / g;
}
int main()
{
  cout << lcm(20, 28) << endl;
  return 0;
}