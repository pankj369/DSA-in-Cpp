#include <iostream>
using namespace std;

int main()
{ //! square pattern
  // !Print ABCD in four line
  // int n = 4;
  // for (int i = 0; i < n; i++)
  // {
  //   char ch = 'A';
  //   for (int j = 0; j < n; j++)
  //   {
  //     cout << ch;
  //     ch += 1;
  //   }
  //   cout << endl;
  // }

  // ? print number form 123 in square form
  // int n=3, num=1;
  // for(int i=0; i<n;i++){
  //   for(int j=0; j<n;j++){
  //     cout<<num<< " ";
  //     num++;
  //   }
  //   cout <<endl;
  // }
  // ? print ABCDEFGHI in square form

  // int n=3;
  // char ch='A';
  // for(int i=0; i<n; i++){
  //   for (int j=0; j<n; j++){
  //     cout<<ch<<" ";
  //     ch++;
  //   }
  //   cout<<endl;
  // }

  //?print a right angle triangle  shape using astersticks
  // int n = 7;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i + 1; j++) // j<i+1
  //   {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }
  //?now with numbers;
  // int n = 5;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     cout << (i + 1);
  //   }
  //   cout << endl;
  // }

  // ? print A BB  CCC DDDD in row pattern

  // int n=4;
  // for(int i=0; i<n;i++){
  //   char ch='A'+i;
  //   for(int j=0; j<=i; j++){
  //     cout<<ch;
  //   }
  //   cout<<endl;
  // }
  // ? print 1 12 123 1234 in row pattern
  // int n = 4;
  // for (int i = 0; i <=n; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout << j;
  //   }
  //   cout << endl;
  // }
  // ?reverse this pattern

  // int n = 4;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i + 1; j >0; j--)
  //   {
  //     cout << j;
  //   }
  //   cout << endl;
  // }
  // ?doing this same question using abcd pattern // but it is not reversed by me i need to see the solution or need to take help form gpt
  // int n=4;
  // for(int i=0; i<=n; i++){
  //   char ch='A';
  //   for(int j=i+1; j>0;j--){
  //     cout<<ch;
  //     ch++;
  //   }
  //   cout<<endl;
  // }
  // ?floyd's triangle pattern
  // int n=4, num=1;
  // for(int i=0; i<=n;i++){
  //   for(int j=1; j<=i;j++){//we can also print this using backward j>0
  //     cout<<num;
  //     num++;
  //   }
  //   cout<<endl;
  // }

  // ?now print this pattern on the base of abce
  // int n = 4;
  // for (int i = 0; i <= n; i++)
  // {
  //   char ch = 'A' + i;
  //   for (int j = 0; j <= i; j++)
  //   {
  //     cout << ch;
  //     ch++;
  //   }
  //   cout << endl;
  // }
  // ?print inverted triangle pattern
  int n = 4;
  int num=1;
  for (int i = 0; i < n; i++)
  {
    // spaces
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // nums
    for (int j = 0; j < n - i; j++)
    {
      cout << (i + 1); //<< " "
    }

    cout << endl;
  }
  return 0;
}