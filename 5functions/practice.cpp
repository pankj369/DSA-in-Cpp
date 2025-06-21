#include <iostream>
using namespace std;

// !Write a function to check if a number is prime or not.

// bool isPrime(int n)
// {
//   if (n <= 1)
//     return false;

//     for (int i = 2; i * i <= n; i++)
//     {
//       if (n % i == 0)
//         return false;
//     }
//     return true;
//   }
//   int main()
//   {
//     int n = 4;
//     cout << isPrime(n);

//   return 0;
// }

// ! WAF to print all prime number from 2 to n.
// bool isPrime(int n)
// { // this is the function to chek if a number is prime or not
//   if (n <= 1)
//     return false;

//   for (int i = 2; i * i <= n; i++)
//   { //*here i use i*i instead of sqrt(n) because  sqrt() take more cpu time
//     // this is looop to check if n is divisible by any number from 2 to n
//     if (n % i == 0)
//       return false;
//   }
//   return true;
// }

// int main()
// {
//   int n;
//   cout << "Enter the number:"; // take as input from the users
//   cin >> n;

//   cout << "Prime     Number from 2 to " << n << "  are:" << endl;
//   for (int i = 2; i <= n; i++)
//   {
//     if (isPrime(i))
//     {
//       cout << i << " ";
//     }
//   }
//   return 0;
// }

// ! write a function to print fibonacci series

int main(){
  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;
  int a=0, b=1;
  cout<<"Fibonacci Series: ";
  for(int i=0; i<n;i++){
    cout<<a<<" ";
    int next=a+b;
    a=b; 
    b=next;
  }
  return 0;
}