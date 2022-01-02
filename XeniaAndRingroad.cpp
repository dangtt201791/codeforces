#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll n, m;
    ll last, now;
    last = 1;
    ll count = 0;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        cin >> now;
        count += (now >= last) ? (now - last) : (n - (last - now));
        last = now;
    }
    cout << count;
    return 0;
}