#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// ! Is Valid palindrome or not
/*
bool isPalindrome(string s) {
    int st = 0, end = s.length() - 1;

    while (st < end) {
        // Skip non-alphanumeric characters
        //checking alpha numberic  
        if (!isalnum(s[st])) {
            st++;
            continue;
        }
        if (!isalnum(s[end])) {
            end--;
            continue;
        }
        // Compare lowercase characters
        if (tolower(s[st]) != tolower(s[end])) {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "Yes, it is a palindrome." << endl;
    } else {
        cout << "No, it is not a palindrome." << endl;
    }

    return 0;
}
*/

// !Remove all Occurrences

// Find to remove all accurrences of a substring 'part' from string 's'
string removeOccurance(string s, string part){
    while(s.length()> 0 && s.find(part)<s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main(){

   string s = "daabcbaabcbc";
   string part = "abc";
   string result = removeOccurance(s, part);
       cout << "Resultant string after removing all occurrences of '" << part << "': " << result << endl;
       return 0;
}