#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    k = k % (nums.size());
    vector<int> t;
    while (k--)
    {
        t.push_back(nums.back());
        nums.pop_back();
    }
    reverse(t.begin(), t.end());
    for (auto it : nums)
        t.push_back(it);
    nums.clear();
    nums = t;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    rotate(nums, 3);
    for (auto it : nums)
        cout << it << ',';
}