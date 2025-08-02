#include <iostream>
using namespace std;

// !hollow cyslinder
/*
int main(){
  int n=5;
  for(int i=1; i<=n; i++ ){
    for (int j = 1; j<=n; j++){
      if(i==1 || i==n || j==1 || j==n){
        cout<<"*";
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}*/

// !Diamond pattern
/*
int main()
{
  int n = 8;
  for (int i = n / 2; i <= n; i += 2)
  {
    for (int j = 1; j < n - i; j += 2)
    { // printing spaces
      cout << " ";
    }
    // first line
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    // printing spaces
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    // second line
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  // printing downward
  for (int i = n; i >= 1; i--)
  {
    // priting spaces
    for (int j = i; j < n; j++)
    {
      cout << " ";
    } // downward stars
    for (int j = 1; j <= (i * 2) - 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
*/

// ! void triangle

int main()
{
  int n = 5;
  for (int i = 1; i <= n; i++)
  {
    // spaces
    for (int spaces = i; spaces <= n; spaces++)
    {
      cout << " ";
    }
    for (int j = 1; j <= (2 * i - 1); j++)
    {
      if (j == 1 || j == (2 * i - 1) || i == n)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}