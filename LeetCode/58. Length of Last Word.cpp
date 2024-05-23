#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    int i, cnt = 0, fl = 0;
    for (i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
            fl = 1;
        if (fl)
        {
            if (s[i] == ' ')
                break;
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    string s = "Hellow world";
    cout << lengthOfLastWord(s);
}