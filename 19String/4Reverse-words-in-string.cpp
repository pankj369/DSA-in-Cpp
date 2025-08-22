#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverseWords(string s)
{
  int n = s.length();
  string ans = "";

  // Reverse the entire string
  reverse(s.begin(), s.end());

  for (int i = 0; i < n; i++)
  {
    string word = "";

    // Extract each word
    while (i < n && s[i] != ' ')
    {
      word += s[i];
      i++;
    }

    // Reverse the word to correct its letters
    reverse(word.begin(), word.end());

    if (word.length() > 0)
    {
      if (ans.length() > 0)
        ans += " "; // add space before next word
      ans += word;
    }
  }

  return ans;
}

int main()
{
  string str = "Hello world this is ChatGPT";
  cout << reverseWords(str) << endl; // Output: "ChatGPT is this world Hello"
  return 0;
}
