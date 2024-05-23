#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> a;
    map<int, int> mp;
    long long int x = 1, i;
    for (auto it : nums)
    {
        if (it)
            x *= it;
        mp[it]++;
    }
    if (mp[0] == 0)
    {
        for (i = 0; i < nums.size(); i++)
            a.push_back(x / nums[i]);
    }
    else if (mp[0] == 1)
    {
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i])
                a.push_back(0);
            else
                a.push_back(x);
        }
    }
    else
    {
        for (i = 0; i < nums.size(); i++)
            a.push_back(0);
    }
    return a;
}

int main()
{
    vector<int> nums = {-1, 1, 0, -3, 3};
    nums = productExceptSelf(nums);
    for (auto it : nums)
        cout << it << ' ';
}