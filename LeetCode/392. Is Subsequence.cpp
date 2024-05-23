#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t)
{
    int i, j = 0, cnt = 0;
    for (i = 0; i < t.size(); i++)
        if (s[j] == t[i])
        {
            cnt++;
            j++;
        }
    return cnt == s.size();
}

int main()
{
    string s = "abcde", t = "ace";
    cout << isSubsequence(s, t);
}