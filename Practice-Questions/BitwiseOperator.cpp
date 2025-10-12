#include <iostream>
using namespace std;
/*
int main()
{
    int a=4, b=8;
    cout<<"Bitwise AND = "<<(a & b)<<endl;  // Bitwise AND
    cout<<"Bitwise OR = "<<(a | b)<<endl;   // Bitwise OR
    cout<<"Bitwise XOR = "<<(a ^ b)<<endl;  // Bitwise
    cout<<"Bitwise NOT = "<<(~a)<<endl;     // Bitwise NOT
    cout<<"Left Shift = "<<(10<< 2)<<endl;  // Left Shift
    cout<<"Right Shift = "<<(10 >>1)<<endl; // Right Shift
    
    return 0;
}
    */

    // ! Finding if a number is power of 2 without loop
/*
    bool isPowerOfTwo(int n){
        return (n && ((n & (n-1))==0));
    }

    int main(){
        int n;
        cout<<"Enter a number: ";
        cin>>n;
        if(isPowerOfTwo(n)){
            cout<<n<<" is a power of 2"<<endl;
        }
        else{
            cout<<n<<" is not a power of 2"<<endl;      
        }
        return 0;
    }
*/

// ! now using loop
/*
int isPowerOfTwo(int n){
    if(n<=0) return false;
    while(n%2==0){
        n/=2;
    }
    return (n==1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isPowerOfTwo(n)){
        cout<<n<<" is a power of 2"<<endl;
    }
    else{
        cout<<n<<" is not a power of 2"<<endl;      
    }
    return 0;
}
    */

    // !practice questions

    int main(){
        int a=6, b=10;
        cout<<"Bitwise AND = "<<(a & b)<<endl;
        cout<<"Bitwise OR = "<<(a | b)<<endl;
        cout<<"Bitwise XOR = "<<(a ^ b)<<endl;
        cout<<"Bitwise NOT = "<<(~a)<<endl;
        cout<<"Left Shift = "<<(10<< 2)<<endl;
        cout<<"Right Shift = "<<(10 >>1)<<endl;
    }