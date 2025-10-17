#include <iostream>
#include <string>

using namespace std;

//? Valid Palindrome or not

bool isAlphaNum(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        (tolower(ch) >= 'a' && tolower(ch) <= 'z');
    }
}

bool palindrome(string str)
{
    int st = 0, end = str.size() - 1;

    while (st < end)
    {
        if (!isAlphaNum(str[st]))
        {
            st++;
            continue;
        }
        if (isAlphaNum(!str[end]))
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

int main()
{
    string str = "madam";
    cout << (palindrome(str) ? "It is a Palindrome." : "It's not a Palindrome.");
    return 0;
}