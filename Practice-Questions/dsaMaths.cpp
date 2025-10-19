#include <iostream>
#include <string>
using namespace std;

string isPrime(int n)
{
    if (n <= 1)
        return "Non Prime"; // 0, 1, and negatives are not prime

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return "Non Prime"; // found a divisor
    }
    return "Prime"; // no divisor found
}

int main()
{
    int n = 16;
    cout << isPrime(n) << endl;
    return 0;
}
