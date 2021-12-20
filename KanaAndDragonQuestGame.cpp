#include <bits/stdc++.h>

using namespace std;

struct TestK
{
    int x, n, m;
};

void Absorption(int &x)
{
    x = x / 2 + 10;
}

void Strike(int &x, int &m)
{
    x = x - 10 * m;
    m = 0;
}

int isKillDragon(TestK a)
{
    if (a.x <= a.m * 10)
        return 1;
    while (a.x > 20 && a.n > 0)
    {
        Absorption(a.x);
        a.n--;
    }
    Strike(a.x, a.m);
    return a.x <= 0 ? 1 : 0;
}

int main()
{
    int t;
    cin >> t;
    TestK a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i].x >> a[i].n >> a[i].m;
    }
    for (int i = 0; i < t; i++)
    {
        if (isKillDragon(a[i]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}