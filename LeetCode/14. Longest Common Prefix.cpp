#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string s = "";
    int mn = 300, i, fl, j;
    for (auto it : strs)
        mn = min(mn, (int)it.size());
    for (i = 0; i < mn; i++)
    {
        char ch = strs[0][i];
        fl = 1;
        for (j = 0; j < strs.size(); j++)
        {
            if (strs[j][i] != ch)
                return s;
        }
        s.push_back(ch);
    }
    return s;
}

int main()
{
    vector<string> nums = {"flower", "flow", "ight"};
    cout << longestCommonPrefix(nums);
}