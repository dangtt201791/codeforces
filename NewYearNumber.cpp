#include <iostream>

using namespace std;

int canornot(int n);

int main()
{
    int t;
    int n[10000];
    cin >> t;
    for (size_t i = 0; i < t; i++)
        cin >> n[i];
    for (size_t i = 0; i < t; i++)
    {
        if (canornot(n[i]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

int canornot(int n)
{
    int y = 0;
    int x;
    while ((n - 2021 * y) >= 0)
    {
        x = (n - 2021 * y) % 2020;
        if (x == 0)
            return 1;
        y++;
    }
    return 0;
}