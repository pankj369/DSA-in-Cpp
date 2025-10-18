#include <iostream>
#include <string>

using namespace std;

//? Valid Palindrome or not

bool isAlphaNum(char ch)
{
    if ((ch >= '0' && ch <= '9') ||
        (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
        return true;
    return false;
}

bool palindrome(string str)
{
    // st for beginning and end for end character
    int st = 0, end = str.size() - 1;

    while (st < end)
    {
        if (!isAlphaNum(str[st]))
        {
            st++;
            continue;
        }
        if (!isAlphaNum(str[end]))
        {
            end--;
            continue;
        }
        if (tolower(str[st]) != tolower(str[end]))
            return false;

        st++;
        end--;
    }
    return true;
}

// !Remove all occurences form a string
string removeAllOccurences(string str1, string part)
{
    while (str1.length() > 0 && str 1.find(part) < str1.length())
    {
        str1.erase(str1.find(part), part.length());
    }
    return str1;
}
int main()
{
    string str = "madam";
    cout << (palindrome(str) ? "It is a Palindrome." : "It's not a Palindrome.");

    cout << endl;

    // removing occurances
    string str1 = "ramashyamamkhtam";
    string part = "am";
    cout << removeAllOccurences(str1, part);

    return 0;
}