#include <iostream>
using namespace std;

int main()
{
  // int n = 10;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  //   int n = 10;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     cout << "* "; //!for stars
  //   }
  //   cout << endl;
  // }
  //   int n = 10;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 1; j<= n; j++) //! using i=0 and j<n
  //   {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }
  //  int n=4;
  //   for(int i=0; i<n;i++){
  //      char ch='A';
  //     for(int j=0; j<n; j++){
  //      cout<<ch<<" "; //!print alphabet
  //      ch+=1;
  //     }
  //     cout<<endl;
  //   }

  // int n=3,  num=1;
  // for(int i=0; i<n; i++){
  //   for(int j=0; j<n; j++){
  //     cout<<num<<" ";
  //     // num+=1;
  //     num++;
  //   }
  //   cout<<endl;
  // }

  // int n=3;
  // char ch='A';
  // for(int i=0; i<n; i++){
  //   for(int j=0; j<n; j++){
  //     cout<<ch<<" ";
  //     ch++;
  //   }
  //   cout<<endl;
  // }
  // int n = 4;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // int n = 4;

  // for(int i=0; i<n; i++){
  //   for(int j=0; j<i+1;j++){
  //     cout<<(i+1);
  //   }
  //   cout<<endl;
  // }

  // for(int i=0; i<n; i++){
  //   char ch='A'+i;
  //   for(int j=0; j<i+1; j++){
  //     cout<<ch<<" ";
  //   }
  //   cout<<endl;
  // }

  // for(int i=0; i<n; i++){
  //   for(int j=1; j<=i+1; j++){
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }
  // int n=5;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i + 1; j > 0; j--)
  //   {
  //     cout << j;
  //   }
  //   cout << endl;
  // }
  // for(int i=0; i<n; i++){
  //   char ch='A'+i;
  //   for(int j=0; j<=i; j++){
  //     cout<<ch;
  //     ch--;
  //   }
  //   cout<<endl;
  // }

  // for(int i=0; i<n; i++){
  //   for(int j=1;j<=i+1; j++){
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }

  //  for(int i=0; i<n; i++){
  //   for(int j=i+1; j>0; j--){
  //     cout<<j;
  //  }
  //  cout<<endl;
  // }

  // for(int i=0; i<n; i++){
  //   char ch='A'+i;
  //   for(int j=i+1; j>0; j--){
  //     cout<<ch;
  //     ch--;
  //   }
  //   cout<<endl;
  // }
  //  int num=1;
  // for(int i=0; i<n; i++){
  //   for(int j=0; j<i; j++){
  //     cout<<num;
  //     num++;
  //   }
  //   cout<<endl;
  // }
  //! using backward
  // int num=1;
  // for(int i=0; i<n; i++){
  //   for(int j=i+1; j>0; j--){
  //     cout<<num;
  //     num++;
  //   }
  //   cout<<endl;
  // }

  //   char ch='A';
  // for(int i=0; i<n; i++){
  //   for(int j=0; j<i; j++){
  //     cout<<ch;
  //     ch++;
  // }
  // cout<<endl;
  // }

  // int n=4;
  // for(int i=0; i<n; i++){
  //   for(int j=0; j<i; j++){
  //     cout<<" ";
  //   }
  //   for(int j=0; j<n-i; j++){
  //     cout<<(i+1);
  //   }
  //   cout<<endl;
  // }

  int n = 5;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " "; // spaces 1 step
    }
    for (int j = 1; j <= i; j++)
    {
      cout << j; // print increasing number form 1 to i
    }
    for (int j = i-1; j > 0; j--)
    {
      cout << j; // print print decreasing number from i to 1
    }
    cout << endl;
  }
/*
  int n = 4;
  for (int i = 0; i < n; i++) // upper half
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " "; // spaces
    }
    cout << "*"; // first star

    // hollow space between stars
    if (i != 0)
    {
      for (int j = 0; j < 2 * i - 1; j++)
      {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }
  // lower half
  for (int i = n - 2; i >= 0; i--)
  {
    // spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout << "*";

    // hollow space between stars

    if (i != 0)
    {
      for (int j = 0; j < 2 * i - 1; j++)
      {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }
    */
  return 0;
}