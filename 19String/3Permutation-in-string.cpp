#include <iostream>
#include <string>
using namespace std;

bool isFreqSame(int freq1[], int freq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
            return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{
    if (s1.length() > s2.length()) return false;

    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++)
        freq[s1[i] - 'a']++;

    int windSize = s1.length();

    for (int i = 0; i <= s2.length() - windSize; i++)
    {
        int windFreq[26] = {0};
        for (int j = 0; j < windSize; j++)
        {
            windFreq[s2[i + j] - 'a']++;
        }

        if (isFreqSame(freq, windFreq))
            return true;
    }

    return false;
}

int main()
{
    cout << checkInclusion("ab", "eidbaooo") << endl; // Output: 1 (true)
    cout << checkInclusion("ab", "eidboaoo") << endl; // Output: 0 (false)
    return 0;
}
