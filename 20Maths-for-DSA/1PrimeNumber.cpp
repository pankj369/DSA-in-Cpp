#include <iostream>
#include <string>
#include <vector>

using namespace std;

//! checking prime number for a single n number
/*
string isPrime(int n){
  for(int i=2; i*i<=n; i++){
    if(n%i==0){
      return "Non Prime";
    }
  }
  return "Prime";
}
int main(){
int n=13;
cout<<isPrime(n)<<endl;
return 0;
}
*/
// ? sometimes we need to find the prime number form a range like  from 2 to N, so in this case we can use an outer loop and take an extra variable and can return the value but it give us TLE in such a way we have a better and optimise way to solve this promblem which is
// !Sieve of Eratosthenes- if we have to find the count of prime number in a range
// * also available on the leetcode problem number 204

int countPrimes(int n)
{
  vector<bool> isPrime(n, true);
  int count = 0;

  for (int i = 2; i < n; i++)
  {
    if (isPrime[i])
    {
      count++;
      // mark multiples of i as not prime
      for (int j = i * 2; j < n; j += i)
      {
        isPrime[j] = false;
      }
    }
  }
  return count;
}

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  cout << "Number of primes less than " << n << " = " << countPrimes(n) << endl;
  return 0;
}