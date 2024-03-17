#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    unordered_map<int, int> mp;
    for (auto it : nums)
        mp[it]++;
    nums.clear();
    for (auto it : mp)
    {
        nums.push_back(it.first);
        if (it.second > 1)
            nums.push_back(it.first);
    }
    return nums.size();
}

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    cout << removeDuplicates(nums) << '\n';
    for (auto it : nums)
        cout << it << " ";
}