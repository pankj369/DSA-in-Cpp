#include <iostream>
#include <string>

using namespace std;

// compare two frequency arrays
bool isFreqsame(int freq1[], int freq2[])
{
    // loop through all 26 alphabets
    for (int i = 0; i < 26; i++)
    {
        // if frequency of any letter doesn't match, return false
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    // If all letters match, return true
    return true;
}

// check if any permutation of s1 exists in s2
bool checkInclusion(string s1, string s2)
{
    // create freqency array for s1
    int freq[26] = {0};
    // count each character's frequency in s1
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++;
    }
    // length of window to slide in s2
    int windSize = s1.length();

    // slide a window of size = s1.length() over s2
    for (int i = 0; i < s2.length(); i++)
    {
        int windIdx = 0, idx = i;
        // create a fresh freqency array for this window
        int windFreq[26] = {0};
        while (windIdx < windSize && idx < s2.length())
        {
            windFreq[s2[idx] - 'a']++;
            windIdx++;
            idx++;
        }
        // compare both  freqency
        if (isFreqsame(freq, windFreq))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout << (checkInclusion(s1, s2) ? "Permutation exists." : "No permutation found.");
    return 0;
}