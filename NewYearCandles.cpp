#include <bits/stdc++.h>

using namespace std;

int countTime(int a, int b)
{
    int count = a;
    while (a >= b)
    {
        count += a / b;
        a = a / b + a % b;
    }
    return count;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << countTime(a, b);
}