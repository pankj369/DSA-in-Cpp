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

 int main(){

  for(int rows4=1; rows4<=2*5+1; rows4++){
    int totalCol= 45;
    for(int columns4=0; columns4<=to ;columns4++){
      cout<<"*";
    }
    cout<<endl;
  }


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
 return 0;
 }