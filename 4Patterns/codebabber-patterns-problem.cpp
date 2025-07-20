#include <iostream>
using namespace std;

int main(){
/*  
int i=1, n=4;
while(i<=n){
  int j=1;
  while(j<=n-i+1){
    cout<<"*";`
    j++;
  }
  cout<<endl;
  i++;
}

int i=1, n=5;
while(i<=n){
  int space=1;
  while(space<i){
    cout<<" ";
    space++;
  }
  int j=1;
  while(j<=n-i+1){
    cout<<"*";
    j++;
  }
  cout<<endl;
  i++;
}


int i=1, n=5;
while(i<=n){
  int space=1;

  while(space<i){
    cout<<" ";
    space++;
  }
  int j=1;
  while(j<=n-i+1){
    cout<<i;
    j++;
  }
  cout<<endl;
  i++;
}
 
  int i=1, n=4;
  while(i<=n){
    int space=1;
    while(space<n-i){
      cout<<" ";
      space++;
    }
    int j=1;
    while(j<=i){
      cout<<i;
      j++;
    }
    cout<<endl;
    i++;
  }


int i=0;
int n=4;
while(i<=n){
  int space =0;
  while(space<i){
    cout<<" ";
    space++;
  }
  int j=i+1;
  while(j<=n){
    cout<<j;
    j++;
  }
  cout<<endl;
  i++;
}

int i=1;
   int num=1;
   int n=3;
   while(i<=n){
    int space=1;
    while(space<=n-i){
      cout<< "  ";//DOUBLE SPACE FOR ALIGNMENT
    space++;
    }
    
    int j=1;
    while(j<=i){
      cout<<num<<" ";
      num++;
      j++;
    }
    cout<<endl;
    i++;
   }


  int n=5;
  int i=1;
  while(i<=n){
    int num1=1;
    while(num1<=n-i+1){
      cout<<num1<<" ";
      num1++;
    }
    int star=1;
    while(star <=2 * (i-1)){
      cout<< "* ";
      star++;
    }
    int num2=n-i+1;
    while(num2>=1){
      cout<<num2<< " ";
      num2--;
    }
    cout<<endl;
    i++;
  }
    */
  int n=4;
  int i=1;
  while(i<=n){
    int space=1;
    while(space<=n-i+1){
      cout<<" ";
      space++;
    }
    int j=1;
    while(j<=i){
      cout<<j;
      j++;
    }
    int k=i-1;
    while(k>0){
      cout<<k;
      k--;
    }
    cout<<endl;
    i++;
  }
return 0;
}