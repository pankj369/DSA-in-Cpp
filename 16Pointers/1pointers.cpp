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
/*
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
  */
// !pass by Value
/*
//pass by value
void changeA(int a){
 a=20;
}
int main(){
  int a=10;
  changeA(a);
  cout<<"Inside main Function : "<<a<<endl;
  return 0;
}
*/
// ! Pass by reference- there are two way :-i.pointers and ii. reference
// pass by reference using pointers
/*void changeA(int *ptr){
 *ptr=20;
}
int main(){
  int a=10;
  changeA(&a);
  cout<<"Inside main Function : "<<a<<endl;
  return 0;
}

//pass by reference using reference(alias)
void changeA(int &b){
 b=20;
}
int main(){
  int a=10;
  changeA(a);
  cout<<"Inside main Function : "<<a<<endl;
  return 0;
}
*/

// !Array Pointers
/*
int main(){
  int arr[]={1,2,3,4,5}; //arr is a pointer
  cout<<arr<<endl; //returns memory address of array
  cout<<*arr<<endl;//pointers array returns 0 index value
  // ?constant pointer - whose value cannot be changed throughout the program
  int a=15;
  arr=&a;
  return 0;
}
*/
// !Pointer Arithmetic

// Increment(++)/ Decrement(--)
/*
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  cout << *arr << endl;//if this gives the 1 index value
  cout << (*arr + 1) << endl;//then this gives the 2nd index value
  cout << (*arr + 2) << endl;
  int a = 10;
  int *ptr = &a;
  cout << ptr << endl;
  ptr++; // increases bytes not value
  cout << ptr << endl;
  // Add /subtract number
  ptr = ptr + 2;
  cout << ptr << endl;
  // Sabract ptr
  int* ptr3;//it is 100 byte
  int* ptr2 = ptr3+2;//then it becomes 108
  cout<<ptr2-ptr3<<endl;
  int* ptr_1;
  int* ptr_2=ptr_1;
  cout<<ptr_1<<endl;
  cout<<ptr_2<<endl;
  cout<<(ptr_1!=ptr_2)<<endl; //comparisons
  return 0;
}
*/
// !question-predict output
int main()
{
  int arr[] = {10, 20, 30, 40};
  int *ptr = arr;

  cout << *(ptr + 1) << endl;
  cout << *(ptr + 3) << endl;
  ptr++; //
  cout << *ptr << endl;
  return 0;
}
