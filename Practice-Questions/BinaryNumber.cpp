#include <iostream>

using namespace std;

//! converting decimal to binary
/*
int decimalToBinary(int n)
{
    int ans = 0;
    int pow = 1; // used to calculate power of 10
    while (n > 0)
    {
        int remainder = n % 2;
        n /= 2;
        ans = ans + (remainder * pow);
        pow *= 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "Binary representation: " << decimalToBinary(n);
    // print binary representation of first 10 numbers
    for (int i = 1; i <= 10; i++)
    {
        cout << decimalToBinary(i) << endl;
    }

    return 0;
}
*/

//! converting binary to decimal

int binaryToDecimal(int n){
    int ans=0;
    int pow=1; // used to calculate power of 2
    while(n>0){
        int remainder=n%10;
        ans=ans+(remainder*pow);
        n/=10;
        pow*=2;
    }
    return ans;
}

 int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    cout<<"Decimal representation: "<<binaryToDecimal(n);
    return 0;
 }

