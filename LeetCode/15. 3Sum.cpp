#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int i, j, k;
    set<vector<int>> v;
    for (i = 0; i < nums.size(); i++)
    {
        j = i + 1;
        k = nums.size() - 1;
        while (j < k)
        {
            if (nums[i] + nums[j] + nums[k] == 0)
                v.insert({nums[i], nums[j], nums[k]});
            if (nums[i] + nums[j] + nums[k] <= 0)
                j++;
            else
                k--;
        }
    }
    vector<vector<int>> vv = {v.begin(), v.end()};
    return vv;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    threeSum(nums);
}