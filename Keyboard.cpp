#include <iostream>
#include <string>

using namespace std;

string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

char rightChar(char inchr, char shift);

int main()
{
    char shift;
    cin >> shift;
    string INstr;
    cin >> INstr;
    string OUTstr = "";
    for (size_t i = 0; i < INstr.size(); i++)
        OUTstr += rightChar(INstr[i], shift);
    cout << OUTstr;
    return 0;
}

char rightChar(char inchr, char shift)
{
    for (size_t i = 0; i < keyboard.size(); i++)
        if (keyboard[i] == inchr)
        {
            if (shift == 'R')
                return keyboard[i - 1];
            if (shift == 'L')
                return keyboard[i + 1];
        }
    return '.';
}