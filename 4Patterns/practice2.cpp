#include <iostream>
using namespace std;

//! print solid rectangle

// int main()
// {
//   int n = 4; // input 4
//   for (int i = 1; i <= n; i++)
//   { // outer loop that tells how much times the loops runs or how many rows will be print also how many no oof lines will print
//     for (int j = 1; j <= n; j++)
//     { // inner loop that tells what to print in each line or columns
//       // cout << "* ";
//       cout<<j;
//     }
//     cout << endl;
//   }
//   // !print abcd in same format
//   for (int i = 1; i <= n; i++)
//   {
//     char ch = 'A';
//     for (int j = 1; j <= n; j++)
//     {
//       cout << ch;
//       ch++;
//     }
//     cout << endl;
//   }
//   return 0;
// }

//! print ABCD then efgh in next line then ijkl , then mnop

// int main()
// {
// int n = 4; // no of rows and columns;
//  char ch='A'; //start char from "A"
// for(int i=1; i<=n; i++){ //outer loop for rows (1 to n or 4)
//   for(int j=1; j<=n; j++){//inner loop for columns (1 to n or 4)
//     cout<<ch; //print current character
//     ch++; //move to next character (B, C, D, etc)
//   }
//   cout<<endl; //after each row move to next line

//! print 1234 in same formate
//   int num = 1;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= n; j++)
//     {
//       cout << num;
//       num++;
//     }
//     cout << endl;
//   }
//   return 0;
// }

// ! print 1\12\123\1234
// int main()
// {
//   int n = 4;
//   int num = 1;
//   for (int i = 1; i <= n; i++)
//     {
//       // char ch='A';
//     for (int j = 1; j <= i; j++)
//     {
//       cout << j;
//       // cout<<ch;
//       // ch++;
//     }
//       cout << endl;
//     }
//     return 0;
//   }

// !print 1\n22\n333\n4444;
// int main(){
//   int n=4;
//   // int num=1;
//   for(int i=0; i<n; i++){
//     // char ch='A'+i;
//     for (int j= 0; j <i+1; j++)
//     {
//       cout<<i+1;
//       // cout<<ch;
//     }
//     cout<<endl;
//   }
//   return 0;
// }

//! print 1\n23\n456\n678910
// int main()
// {
//   int n = 4;
//   int num = 1;
//   char ch = 'A'; // use char variable outside the loop when u dont need to update the value from initial  while use inside the loop when u need to print value again from a
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 0; j < i; j++)
//     {
//       // cout<<num;
//       // num++;
//       cout << ch;
//       ch++;
//     }
//     cout << endl;
//   }
//   return 0;
// }

// ! print 1\21\321
// int main(){
//   int n=4;
//   for(int i=1; i<=n;i++){
//     for(int j=i; j>=1;j--){ // inner loop from i to 1 beacuse its decreasing
//       cout<<j;
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// !print a\ba\cba


// int main() {
//   int n = 4;
//   for (int i = 0; i < n; i++) {
//     for (int j = i; j >= 0; j--) {
//       char ch = 'A' + j;
//       cout << ch;
//     }
//     cout << endl;
//   }
//   return 0;
// }

// !pritn 1111\n _222\n_33
int main(){
  int n=3;
  for(int i=1; i<=n; i++){
    for(int j=0; j<i; j++){
      cout<<" ";

      for(int j=0; j<n-1;j++){
        cout<<(i+1);
      }
      cout<<endl;
    }
  }
  return 0;
}
