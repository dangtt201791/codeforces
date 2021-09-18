#include <iostream>

using namespace std;

void input(int n[], int t);
int obtain1FromN(int n);

int main()
{
    int t;
    int n[20000];
    cin >> t;
    input(n, t);
    for (size_t i = 0; i < t; i++)
    {
        cout << obtain1FromN(n[i]) << endl;
    }
    return 0;
}

void input(int n[], int t)
{
    for (size_t i = 0; i < t; i++)
        cin >> n[i];
}

int obtain1FromN(int n)
{
    int count = 0;
    while (n > 1)
    {
        if (n % 6 == 0)
        {
            count++;
            n /= 6;
        }
        else if (n % 3 == 0)
        {
            count += 2;
            n /= 3;
        }
        else
            return -1;
    }
    return count;
}