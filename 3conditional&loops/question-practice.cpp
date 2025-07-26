#include <iostream>
using namespace std;
//! print numbers form 1 to 10 using loop
/*int main(){
int n=10;
for(int i=1; i<=n; i++){
  cout<<i<<endl;
}
return 0;
}
*/
//! print even numbers from 1 to 50;
/*int main(){
  int n=50;
    for(int i=1; i<=n; i++){
    if(i%2==0){
      cout<<i<<" ";
    }
  }
  return 0;
}
*/
/*
int main(){
  int n=10;
  int num=7;
  for(int i=1; i<=n; i++){
    cout<< num*i<<endl;
  }
  return 0;
}
*/
/*
int main(){
  int n=10;
  for(int i=1; i<=n; i++){
     cout<<i*i<<" ";
   }
  return 0;
}
*/
/*
int main(){
int n = 5;

for(int i=1; i<=n; i++){//rows
  for (int j=5; j>=n-i+1; j--){//columns
    cout<<j;//print stars
  }
  cout<<endl;
}
return 0;
}
*/
/*
int main(){
  // int n=9;
  for(int i=9; i>5; i--){
    cout<<"+"<<endl;
    // cout<<endl;
  }
  // cout<<endl;
  return 0;
}
*/
// !patterns again
//! iska output error hai i mean decreasing loop is not working properly
int main(){
  int n=4;
  int increase=1; 
  int decrease=20;
  for(int i=1; i<=n; i++){
    for(int spaces=1; spaces<=i; spaces++){
      cout<<"  ";
    }
    //print increasing number
    for(int j=1; j<=n-i+1; j++){
      cout<<increase++<<" "; 
    }
    //print decreasing number
    for(int k=1; k<=n-i+1; k++ ){
      cout<<decrease--<<" ";
    }
    cout<<endl;
    }
/*
int main(){
int n=6;
for(int i=1; i<=n; i++){
  for(int j=n-i+1; j>=1; j--){
    cout<<i<<" ";
}
  cout<<endl;
}
*/
/*
int main(){
  int n=5; 
  for(int i=1; i<=n; i++){
    int start= i%2==0? 0:1;
    for(int j=1; j<=i; j++){
      cout<<start<<" ";
      start=1-start;
    }
    cout<<endl;
  }
  */
 /*
int main (){
  int n=5;
  int num=1;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout<<num;
      num++;
    }
    cout<<endl;
  }
*/
/*
int main(){
int n=5;
for(int i=1; i<=n; i++){
  for(int spaces=1; spaces<=2*(n-i); spaces++){
    cout<<" ";
  }
  for(int k=i;k>=2; k--){
    cout<<k<<" ";
  }
  for(int j=1; j<=i; j++){
    cout<<j<<" ";
  }
  cout<<endl;
}
*/
/*
int main()
{
  int n = 5;
  // upper
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    for (int spaces = 1; spaces <= 2 * (n - i); spaces++)
    {
      cout << " ";
    }
    for (int k = 1; k <= i; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
  // lower
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    for (int spaces = 1; spaces <= 2 * (n - i); spaces++)
    {
      cout << " ";
    }
    for (int k = 1; k <= i; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
*/
  /*
  int main()
  {
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
      for (int spaces = 1; spaces <= n - i; spaces++)
      {
        cout << " ";
      }
      for (int j = i; j >= 1; j--)
      {
        cout << j;
      }
      for (int k = 2; k <= i; k++)
      {
        cout << k;
      }
      cout << endl;
    }
    // lower section
    for (int i = n - 1; i >= 1; i--)
    {
      for (int spaces = 1; spaces <= n - i; spaces++)
      {
        cout << " ";
      }
      for (int j = i; j >= 1; j--)
      {
        cout << j;
      }
      for (int k = 2; k <= i; k++)
      {
        cout << k;
      }
      cout << endl;
    }
    */
  /*
  int nCr(int n, int r)
  {
    int res = 1;
    if (r > n - r) r = n - r;
    for (int i = 0; i < r; ++i)
    {
      res *= (n - i);
      res /= (i + 1);
    }
    return res;
  }
  int main()
  {
    int n = 5;
    for (int i = 0; i < n; i++)
    {
      for (int spaces = 0; spaces < n - i - 1; spaces++)
      {
        cout << " ";
      }
      for (int j = 0; j <= i; j++)
      {
        cout << nCr(i, j) << " ";
      }
      cout << endl;
    }
  */
  /*
  int n=5;
  //top half
  for(int i=1; i<=n; i++){
    for(int spaces=1; spaces<=n-i; spaces++){
      cout<<" ";
    }
    for(int j=1; j<=2*i-1; j++){
      if(j==1 || j==2*i-1){
        cout<<"*";
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
  //bottom half
  for(int i=n-1; i>=1; i--){
    for(int spaces=1; spaces<=n-i; spaces++){
      cout<<" ";
    }
    for(int j=1; j<=2*i-1; j++){
      if(j==1 || j==2*i-1){
        cout<<"*";
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
  */
  /*
  int n=5;
  for(int i =n; i>=1; i--){ //outer loop -controls the no. of rows
    for(int spaces=1; spaces<=n-i; spaces++){
      cout<<" ";//print leading spacces to shift the triangle right
    }
    for(int j=1; j<=n; j++){ //inner loop controls wht to print in each row
      if(j==1|| j==i ||i==n){// print star at start, i-th position and full row if i==n
        cout<<"* ";
      }else{
        cout<<"  ";//print space btwn stars here,  print two spaces for alignment
      }
    }
    cout<<endl;
  }
  */
  /*
int n=5;
for(int i=1; i<=n; i++){
  for(int spaces=1; spaces<=n-i; spaces++){
    cout<<" ";
  }
  //print stars and internal spaces
  for(int j=1; j<=i; j++){
    if(j==1 || j==i || i==n){
      cout<<"* ";
    }else{
      cout<<"  ";
    }
  }
  cout<<endl;
}
*/
  /*
  int n=5;
  for(int i=1; i<=n; i++){
    for(int spaces=1; spaces<=i; spaces++ ){
      cout<<" ";
    }
    for(int j=1; j<=n-i+1; j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  for(int i=1; i<=n; i++){
         for(int spaces2=1; spaces2<=n-i+1; spaces2++){
      cout<<" ";
    }
    for(int k=1; k<=i;k++){
      cout<<"* ";
    }
    cout<<endl;
  }
  */
  /*
int n=5;
for(int i=1; i<=n; i++){
for(int space=1; space<=i; space++){
  cout<<" ";
}
for(int j=1; j<=n-i+1; j++){
  cout<<"*";
}
for(int k=1; k<=n-i;k++){
  cout<<"*";
}
cout<<endl;
}
*/
  /*
int n=5;
for(int i=1; i<=n; i++){
  for(int space=1; space<=n-i+1; space++){
    cout<<" ";
  }
  for(int j=1; j<=i; j++){
    cout<<"*";
  }
  for(int j2=1; j2<=i-1; j2++){
    cout<<"*";
  }
  cout<<endl;
}
  */

  /*
  int n=5;
  for(int i=1; i <= n; i++){
    for(int j=1; j<=i; j++){
     cout<<" ";
    }
    for(int k=1; k<=n-i+1; k++){
      cout<<"*";
    }
    cout<<endl;
  }
    */
  /*
    int n=5;
    for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i+1; j++){
      cout<<" ";
    }
      for(int j=1; j<=i; j++){
        cout<<"*";
      }
      cout<<endl;
    }
   */
  /*
    int n = 5;
    for (int i = 1; i <= 2 * n; i++) //row
    {
      int totslColsRow = i >= n ? 2 * n - i : i;
      for (int j = 1; j <= totslColsRow; j++)//column
      {
        cout << "*";
      }
      cout << endl;
    }
  */
  /*
    for(int rows3=1; rows3<=5; rows3++){
      for(int columns3=1; columns3<=5-rows3+1;columns3++){
        cout<<columns3;
      }
      cout<<endl;
    }

    for(int rows=1; rows<=5; rows++){
      //for every row, run the col
    for(int columns=1; columns<=rows;columns++){
      cout<<columns;
    }
    cout<<endl;
   }
    */
  return 0;
}