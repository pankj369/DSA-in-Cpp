#include <iostream>
using namespace std;

//! finding minimum of two numbers
/*
int main(){

    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a<b){
        cout<<"Minimum is: "<<a<<endl;
    }else{
        cout<<"Minimum is: "<<b<<endl;
    }
    return 0;

}

*/
// ! calculate the sum of numbers from 1 to n
/*
int sumOfNum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    // Taking n from user to calculate sum from 1 to n
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of numbers from 1 to n is: " << sumOfNum(n) << endl;
    return 0;
}
    */

// ! calculate N factorial
/*
long long factN(int n){ //for >20 , we need to use unsigned long long or Big Integer
   long long fact=1;
   for(int i=1; i<=n;i++){
       fact*=i;
   }
   return fact;
}

int main(){
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   cout<<"factorial of N: "<<factN(n)<<endl;
   return 0;
}
*/

// ! Calculate the sum of digits of a number
/*
int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        int remainder=n%10;
        sum+=remainder;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of digits is: "<<sumOfDigits(n)<<endl;
    return 0;
}
*/

//! Calculate binomial coefficient
/*
int factN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
long long nCr(int n, int r)
{
    long long fact_n = factN(n);
    long long fact_r = factN(r);
    long long fact_nmr = factN(n - r);
    return fact_n / (fact_r * fact_nmr);
}

int main()
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    cout << "The Binomial Coefficient of n and r :" << nCr(n, r) << endl;
    return 0;
}

*/

//! TODO
//! Write a function to check if a number is prime or not?
/*
bool isPrime(int n){
    if( n<=1 ) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}


int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is a prime number"<<endl;
    }else{
        cout<<n<<" is not a prime number"<<endl;
    }
    return 0;
}
 */

//! Write a function to print all prime number form 2 to m
/*
int primeNum(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Prime number form 2 to " << n << " are: " << endl;

    for (int i = 2; i <= n; i++)
    {
        if (primeNum(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
*/

// ! Write a function to print Fibonacci series up to n terms

void fibonacci(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
}

int main()
{
    int n;
    cout << "Enter the number of terms in fibonacci series: ";
    cin >> n;
    fibonacci(n);
    return 0;
}