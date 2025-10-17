#include <iostream> // for input-output (cout, cin)
#include <string>   // for using string and to_string()
#include <vector>   // for using vector container

using namespace std;

//------------------------------------------------------
// Function: stringCompress()
// Purpose:  Compresses a given vector of characters.
// Example:  ['a','a','b','b','c','c','c'] → ['a','2','b','2','c','3']
// Returns:  The new length of the compressed array.
//------------------------------------------------------
int stringCompress(vector<char> &chars)
{
    int n = chars.size(); // total size of the input vector
    int idx = 0;          // 'idx' will keep track of position to insert next compressed character

    // Loop through all characters
    for (int i = 0; i < n; i++)
    {
        char ch = chars[i]; // current character
        int count = 0;      // initialize count for frequency of current character

        // Count how many times this character repeats consecutively
        while (i < n && chars[i] == ch)
        {
            count++; // increment frequency
            i++;     // move to next character
        }

        // Step back once because 'i' went one extra ahead in the while loop
        i--;

        // Place the character into the compressed array
        chars[idx++] = ch;

        // If count is greater than 1, add digits of the count after the character
        if (count > 1)
        {
            // Convert count (integer) to string (e.g., 3 → "3", 12 → "12")
            string str = to_string(count);

            // Insert each digit of count separately (important for counts like 12)
            for (char dig : str)
            {
                chars[idx++] = dig;
            }
        }
    }

    // Return new length of compressed string
    return idx;
}

//------------------------------------------------------
// Main Function
//------------------------------------------------------
int main()
{
    // Input vector of characters
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    // Call the stringCompress() function and store the new length
    int newLength = stringCompress(chars);

    // Display the compressed string
    cout << "Compressed string: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << chars[i]; // print compressed characters one by one
    }
    cout << endl;

    // Display the new length of the compressed vector
    cout << "New length: " << newLength << endl;

    return 0; // program ends successfully
}
