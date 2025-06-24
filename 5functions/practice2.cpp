#include <iostream>
using namespace std;

// !sum of number

// int sumNum(int n){
//   int sum=0;
//   for(int i=1; i<=n; i++){
//     sum+=i;
//   }
//   return sum;
// }
// int main(){
//   int n=10;
//   cout<<sumNum(n)<<endl;
//   return 0;
// }

// ! find the sum of the digits of a number

// int digitSum(int num){
//   int sum=0;
//   while(num>0){
//   int lastdigit=num%10; //get lastdigit
//     sum+=lastdigit; //add lastdigit to sum
//     num/=10; //remove last digit
//   }
//   return sum;
// }
// int main(){
//   int num;
//   cout<<"Enter the number: ";
//   cin>>num; //take the input from the user
//  cout<<digitSum(num);
//  return 0;
// }
//* another way to write this
// int main()
// {
//   int num = 1234;
//   int sum = 0;
//   while (num > 0)
//   {
//     int lastdigit = num % 10;
//     sum += lastdigit;
//     num /= 10;
//   }
//   cout << sum << endl;
//   return 0;
// }

//! write the factorial of the number

// int factorial(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n < 0) {
//         cout << "Factorial is not defined for negative numbers.";
//     } else {
//         cout << "Factorial of " << n << " is " << factorial(n);
//     }

//     return 0;
// }

// ! Calculate nCr binomial coefficient for n & r

// int factorial(int n)
// {
//   long long fact = 1;
//   for (int i = 1; i <= n; i++)
//   {
//     fact *= i;
//   }
//   return fact;
// }

// long long nCr(int n, int r){
//   long long fact_n=factorial(n);
//   long long fact_r=factorial(r);
//   long long fact_nmr=factorial(n-r);
//   return fact_n/(fact_r * fact_nmr);
// }

// int main(){
//   int n=8, r=2;
//   cout<<nCr(n,r)<<endl;
//   return 0;
// }

// !check if a number is prime or not

// int isPrime(int n){
//   if(n<=1)
//   return false;
//   for(int i=2; i*i<=n; i++){
//     if(n%i==0){
//       return false;
//     }
//     return true;
//   }
// }
// int main(){
//   int n=5;
//   cout<<isPrime(n);
//   return 0;
// }

//! print all the prime number form 1 to n
// int primeNum(int n){
//   if(n<=1)
//   return false;
//   for(int i=2;i*i<=n; i++){
//     if(n%i==0)
//     return false;
//   }
//   return true;
// }

// int main(){
//   int n;
//   cout<<"Enter the number: ";
//   cin>>n;
//   cout<<"Prime number form 2 to "<<n<<" are"<<endl;

//   for(int i=2; i<=n; i++){
//     if(primeNum(i)){
//       cout<<i<<endl;
//     }
//   }
//   return 0;
// }

// ! waf to print nth fibonacci

int main()
{
  int n;
  cout << "Enter the nth fibonacci : ";
  cin >> n;
  int a = 0;
  int b = 1;
  cout<<"Fibonacci series:";    
  for (int i = 0; i <= n; i++)
  {
    cout << a << " ";
    int next = a + b;
    a = b;
    b = next;
  }
  return 0;
}