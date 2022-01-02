#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> vt;
    vt.push_back(0);
    for (int i = 1; i <= n - 1; i++)
    {
        int x;
        cin >> x;
        vt.push_back(x);
    }

    int pos = 1;
    while (pos < t)
    {
        pos += vt[pos];
    }
    if (pos == t)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}