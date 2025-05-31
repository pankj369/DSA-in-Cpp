#include <iostream> //preprocessor directive - it is basically a statement that we ask our compiler before compilation
using namespace std;

int main()
{
  // variables and data types
  //  int age = 34;           // 4 bytes
  //  char grade = 'A';       // 1 bytes
  //  float percent = 67.98f; // 4 bytes
  //  bool isSafe = true;     // 1 bytes
  //  double rate = 8.25;     // 8 bytes
  //  cout << age << endl;
  //  cout << grade << endl;
  //  cout << percent << endl;
  //  cout << isSafe << endl;
  //  cout << rate << endl;

  // type conversion , implicit (done by compiler);

  // char grade ='A';
  // int value=grade;
  // cout<<value<<endl;

  // type casting= converting data from one type to another
  // explicit = done by coder manually
  //  double price=800.95645;
  //  int newPrice=(int)price;
  //  cout<<newPrice<<endl;

  // input in c
  // int age;
  // cout << "Enter your age : ";
  // cin >> age; //taking input from the user
  // cout << "Your age is : " << age << endl;

  // example
  // double price;
  // cout << "Enter the product price: ";
  // cin >> price;
  // cout << "The product price is: " << price << endl;

  // operators
  // 1.arithmetic operators
  // int a = 3, b = 10;
  // // int sum = a + b;
  // // cout <<sum<<endl;
  // cout << (a + b) << endl;
  // cout << (b - a) << endl;
  // cout << "Product = " << (a * b) << endl;
  // cout << "Division = " << (b / (double)a) << endl;
  // cout << "Modulo = " << (b % a) << endl;

  // 2.relational operators =returns boolean value 0 or 1

  // cout << (4 < 6) << endl;
  // cout << (4 > 6) << endl;
  // cout << (4 == 6) << endl;
  // cout << (4 != 6) << endl;
  // cout << (4 <= 6) << endl;
  // cout << (4 >= 6) << endl;

  // 3.Logical operators= or and not
  // cout << ((3 > 1) || (3 < 1)) << endl;
  // cout << ((3 > 1) && (3 < 1)) << endl;
  // cout <<(!(3>4))<<endl;
  
  
  // Quesition= sum of two numbers

  // int a=10, b=10;
  // int sum=a+b;
  // cout<<sum<<endl;  
  // //using hard code

  int a,b;
  cout<<"Enter the first number: ";
  cin>>a;
  cout<<"Enter the 2nd number: ";
  cin>>b;
  cout<<"The sum of 1st and 2nd number is: "<<(a+b)<<endl;
  return 0;
}