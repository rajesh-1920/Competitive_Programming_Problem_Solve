// Author:  Rajesh Biswas
// Date  :  19.12.2023

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test=1, n, i;
    cin >> test;
    while (test--)
    {
        //l;
        string s;
        map<char, int> mp;
        cin >> n >> s;
        for (i = 0; i < s.size(); i++)
            mp[s[i]]++;
        i = 0;
        for (auto it : mp)
        {
            if ((it.first - 'A' + 1) <= it.second)
                i++;
        }
        cout << i << '\n';
    }
    return 0;
}