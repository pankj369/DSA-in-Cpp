#include <iostream>
#include <string>
#include <algorithm> //used for reverse() function
using namespace std;

// function to reverse the order of words in a string
string reverseStringWords(string s1)
{
    int size = s1.length();
    // create an empty strign to stroe the final reversed sentence
    string ans = "";
    // reverse the entire string (letter by letter like the pen - nep eht)
    reverse(s1.begin(), s1.end());

    // Traverse the reversed string character by character
    for (int i = 0; i < size; i++)
    {
        // create a temporary string to hold each word
        string word = "";
        // collect character until we reach a space(' ')
        // for eg- nep eht we first get "nep"
        while (i < size && s1[i] != ' ')
        {
            word += s1[i];
            i++;
        }
        // reverse the current word back to its corret order nep-pen
        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            ans += " " + word;
        }
    }
    // substr is used for remove the leading space from the first word
    return ans.substr(1);
}

int main()
{
    string s1 = "the pen";
    cout << "The output : " << reverseStringWords(s1);
    return 0;
}