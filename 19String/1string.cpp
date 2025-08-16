#include <iostream>
#include <string>

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

  // char str[]="apna college";
 
  // cout<<"Enter char array : ";
  // cin.getline(str, 100, '$');
    // cin.getline(str, 12);

  //hellow world $d from here(remove from here)
  //  int len=0;
  //   for(int i=0; i<str[i]!='\0'; i++){{
  //     len++;
  //   }
  //   cout<<"length of strings : "<< len<<endl;
  // }


  // ! Strings in C++
  // it is re-assignable
  string str= "I am a billionaire";
  cout<<str<<endl;
  str= "hello";
  cout<<str<<endl;
  string str1= "I'm a Champion";
  string str2= "I'm a Billionaire";
  string str3 = str1 +"\n"+str2 ; //concatenation
  cout<<str3<<endl;
  // compare two string are equal or not
  cout<<(str1==str2)<<endl; //0 as a result
  // get the length of the string
  cout<<str1.length()<<endl;
  // how to get the full sentence using cin

  string st;
  getline(cin, st);
  cout<<"Output: "<<st<<endl;



  // ! Loops on a string
  string string1="Pnkjfrom darbhanga";
  for(char cha: string1){
    cout<<cha<<" ";
  }
  cout<<endl;
  
  return 0;
}