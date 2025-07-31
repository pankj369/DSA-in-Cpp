#include <iostream>
#include <vector>

using namespace std;
// !adress of operator (&-ampersand)
/*int main(){
  int a=10;
  cout<<&a<<endl;
  return 0;
}
*/
// !Pointers- special variables that store address of other variables
/*
int main()
{
  int a = 10;
  int *ptr = &a; // we assign a address of a variable to another special variable that is pointer
  float price = 100.25;
  float *ptr2 = &price;
  // !pointer to pointer
  float **ptr3 = &ptr2;
  cout << ptr3 << endl;
  cout << &ptr2 << endl;

  cout << ptr2 << endl;
  cout << ptr << endl;

  // !Dereference opertor- value at address
  cout << *(&a) << endl;
  cout << *(ptr) << endl;
  cout << **(ptr3) << endl;
  cout << *(ptr3) << endl;
  cout << (ptr3) << endl;
  // !NULL pointer
  int **ptrNull = NULL;
  cout << *ptrNull << endl;
  return 0;
}
  */

// ?Question
int main()
{
  int a = 5;
  int *p = &a;
  cout << *p << endl;
  int **q = &p;
  cout << **q << endl;
  cout << p << endl;
  cout << *q << endl;
  cout<< &a << endl;
  return 0;
}
