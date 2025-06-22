#include <iostream>
using namespace std;

// ! Convert the decimal number into binary number
// int decToBin(int decNum) {
//   int ans = 0;     // Initialize answer to store the binary number (in decimal form)
//   int pow = 1;     // Power variable to manage place value (1, 10, 100, ...) in binary

//   // Run loop until the decimal number becomes 0
//   while (decNum > 0) {
//     int rem = decNum % 2;   // Get the remainder when dividing by 2 (will be 0 or 1)
//     decNum /= 2;            // Divide the decimal number by 2 to reduce it

//     ans += rem * pow;       // Add the binary digit (0 or 1) in the correct position
//     pow *= 10;              // Move to the next place (units → tens → hundreds in binary format)
//   }

//   return ans;   // Return the final binary number (in integer form)
// }

// int main(){
//   // int decNum=50;
//   for(int i=1; i<=10; i++){
//     cout<<decToBin(i)<<endl;
//   }
//   return 0;
// }

// ! convert binary number into decimal number
int binToDec(int binNum)
{
  int ans = 0;
  int pow = 1; // 2 ka power
  while (binNum > 0)
  {
    int rem = binNum % 10; // extract last digit(0 or 1)
    ans += rem * pow;      // add binary digit *2 ^power to the answer
    binNum /= 10;          // remove the last digit
    pow *= 2;              // move to the next power of 2
  }
  return ans;
}
int main()
{
  int binNum = 101; 
  cout << binToDec(binNum) << endl;
  return 0;
}