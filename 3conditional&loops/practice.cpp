#include <iostream>
using namespace std;

int main()
{
  // ! sum of all numbers from 1 to n which are divisible by 3.
  // int n = 20, sum = 0;
  // for (int i = 1; i <= n; i++)
  // {
  //   if (i % 3 == 0)
  //   {
  //     sum += i;
  //   }
  // }
  // cout << sum;

  //! Print factorial of a number N.

  int n = 3, fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  cout << fact;
  return 0;
}