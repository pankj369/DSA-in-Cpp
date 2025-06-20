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
int n=4;
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

  for(int i=0; i<n; i++){
    for(int j=0;j<i+1; j++){
      cout<<j;
    }
    cout<<endl;
  }
  return 0;
}