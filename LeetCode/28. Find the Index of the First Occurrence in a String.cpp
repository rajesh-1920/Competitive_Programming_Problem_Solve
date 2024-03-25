#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    int i, l = needle.size();
    string s;
    for (i = 0; i < haystack.size(); i++)
    {
        s = haystack.substr(i, l);
        if (s == needle)
            return i;
    }
    return -1;
}

int main()
{
    string s1 = "sadbutsad", s2 = "sad";
    cout << strStr(s1, s2);
}