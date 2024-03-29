#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string s1, s2;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            s1.push_back(tolower(s[i]));
            s2.push_back(tolower(s[i]));
        }
        if (s[i] >= '0' && s[i] <= '9')
        {
            s1.push_back(s[i]);
            s2.push_back(s[i]);
        }
    }
    reverse(s1.begin(), s1.end());
    return s1 == s2;
}

int main()
{
    string s = " 21";
    cout << isPalindrome(s);
}