#include <iostream>

using namespace std;

int isOddDivisor(long long n);

int main()
{
    long long s[10000];
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
        cin >> s[i];
    for (size_t i = 0; i < t; i++)
    {
        if (isOddDivisor(s[i]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

int isOddDivisor(long long n)
{
    while (n > 2)
    {
        if (n % 2 != 0)
            return 1;
        n /= 2;
    }
    if (n == 2)
        return 0;
    else
        return 1;
}