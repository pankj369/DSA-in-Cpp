#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// ! Is Valid palindrome or not

bool isPalindrome(string s) {
    int st = 0, end = s.length() - 1;

    while (st < end) {
        // Skip non-alphanumeric characters
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
