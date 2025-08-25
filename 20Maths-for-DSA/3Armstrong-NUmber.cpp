#include <iostream>

using namespace std;

// !Armstrong Number is a number that is equal to the sum of cubes of its digits.

bool isArmStrong(int n)
{
  int copyN = n;
  int sumOfCubes = 0;
  while (n != 0)
  {
    int dig = n % 10;
    sumOfCubes += (dig * dig * dig);

    n = n / 10;
  }
  return sumOfCubes == copyN;
}

int main()
{
  int n = 153;
  if (isArmStrong(n))
  {
    cout << "Is an armstrong number\n";
  }
  else
  {
    cout << "NOT an armstrong number\n";
  }
  return 0;
}