#include <iostream>
#include <vector>

using namespace std;

int main(){
  // ! character array
  // char str= 'a';
  // char str1[] = {'a', 'b', 'c'};
  // cout<<str1<<endl; // we get different output if we don't use \0 
  // char str[] = {'a', 'b', 'c', '\0'};
  // cout<<str<<endl;
  //? cout<<strlen(str)<<endl;

  // !Input and output

  char str[]="apna college";
 
  // cout<<"Enter char array : ";
  // cin.getline(str, 100, '$');
    // cin.getline(str, 12);

  //hellow world $d from here(remove from here)
   int len=0;
    for(int i=0; i<str[i]!='\0'; i++){{
      len++;
    }
    cout<<"length of strings : "<< len<<endl;
  }

  return 0;
}