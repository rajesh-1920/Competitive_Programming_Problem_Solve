#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    auto it = find(nums.begin(), nums.end(), val);
    while (it != nums.end())
    {
        nums.erase(it);
        it = find(nums.begin(), nums.end(), val);
    }
    return nums.size();
}

int main()
{
    vector<int> nums = {3, 2, 2, 3};
    cout << removeElement(nums, 2) << '\n';
    for (auto it : nums)
        cout << it << " ";
}