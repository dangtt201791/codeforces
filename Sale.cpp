#include <iostream>

using namespace std;

void Switch(int &a, int &b);
void sort(int a[], int n);
int maximumsumofmoney(int a[], int m);

int main()
{
    int n, m, a[100];
    cin >> n >> m;
    for (size_t i = 0; i < n; i++)
        cin >> a[i];
    sort(a, n);
    cout << maximumsumofmoney(a, m);
    return 0;
}

void Switch(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int a[], int n)
{
    for (size_t i = 0; i < n - 1; i++)
        for (size_t j = i + 1; j < n; j++)
            if (a[i] > a[j])
                Switch(a[i], a[j]);
}

int maximumsumofmoney(int a[], int m)
{
    int money = 0;
    for (size_t i = 0; i < m; i++)
    {
        if (a[i] > 0)
            break;
        money += a[i];
    }
    return abs(money);
}