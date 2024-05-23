#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    int i;
    vector<int> a(nums.size(), 0);
    a[0] = 1;
    for (i = 1; i < nums.size(); i++)
    {
        if (a[i - 1])
        {
            if (i + nums[i - 1] >= nums.size())
                return true;
            fill(a.begin(), a.begin() + i + nums[i - 1], 1);
        }
    }
    if (a[nums.size() - 1])
        return true;
    return false;
}

int main()
{
    vector<int> nums = {3, 2, 1, 0, 4};
    cout << canJump(nums) << '\n';
}