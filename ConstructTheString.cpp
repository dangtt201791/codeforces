#include <iostream>
#include <string>

using namespace std;

struct tieuchuan
{
    int n, a, b;
};

string MakeSubstring(int b);
string ConstructStr(int n, int a, int b);

int main()
{
    int t;
    tieuchuan tc[2000];
    cin >> t;
    for (size_t i = 0; i<t; i++)
    {
        cin >> tc[i].n >> tc[i].a >> tc[i].b;
    }
    for (size_t i = 0; i<t; i++)
    {
         cout << ConstructStr(tc[i].n, tc[i].a, tc[i].b) << endl;
    }
    return 0;
}

string MakeSubstring(int b)
{
    string sub = "";
    char chr = 'a';
    for (size_t i = 1; i<=b; i++)
    {
        sub += chr;
        chr++;
    }
    return sub;
}

string ConstructStr(int n, int a, int b)
{
    string str = "";
    int nguyen = n/b;
    int le = n%b;
    string sub = MakeSubstring(b);
    for (size_t i = 1; i<=nguyen; i++)
        str += sub;
    for (size_t i = 0; i<le; i++)
        str += sub[i];
    return str;
}