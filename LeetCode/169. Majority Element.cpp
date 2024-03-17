#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    if (!nums.size())
        return 0;
    map<int, int> mp;
    int mx = 0, res = 0;
    for (auto it : nums)
    {
        mp[it]++;
        if (mp[it] > mx)
        {
            mx = mp[it];
            res = it;
        }
    }
    if (mp[res] > (nums.size() / 2))
        return res;
    return 0;
}

int main()
{
    vector<int> nums = {3,2,3};
    cout << majorityElement(nums);
}