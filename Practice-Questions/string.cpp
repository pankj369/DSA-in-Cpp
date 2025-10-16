#include <iostream>
#include <string>
#include <algorithm> //required for reverse()
using namespace std;

int main()
{
    char str[] = "Pankaj Kumar Singh";
    cout << "Str : " << str << endl;

    char name[20] = "Pankaj Kumar Singh ";
    cout << "using array: " << name << endl;

    // input method
    char name1[20];
    cin >> name1; //this will read input until whitespace
    cout << "Using cin : " << name1 << endl;

    // uisng cin.getline() function
    cin.getline(name1, 100); //this will read full line including whitespace
    cout << "using cin.getline : " << name1 << endl;


// using string classes - this is the easier and safest than character array also automatically manages
    string s1 = "Hello";
    string s2 = "Pankj";
    string s3 = s1 + " " + s2;
    cout << s3 << endl;

    //?Sting questions
    //! run a loop on an user's input

    string str2="Enter whatever you want";

    for(char text : str2){
        cout<<text<<" ";
    }

    //! reverse an string using reverse function
    string str3="Enter whatever you want";
    reverse(str3.begin(), str3.end());
    cout<<"\nReverse an string : "<<str3;
    return 0;
}