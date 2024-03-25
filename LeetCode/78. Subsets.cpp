#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
void generate(vector<int> &sub, int i, vector<int> &nums)
{
    if (i == nums.size())
    {
        ans.push_back(sub);
        return;
    }
    generate(sub, i + 1, nums);
    sub.push_back(nums[i]);
    generate(sub, i + 1, nums);
    sub.pop_back();
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> v;
    ans.clear();
    generate(v, 0, nums);
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<int> v;
    ans.clear();
    generate(v, 0, nums);
    for (auto it : ans)
    {
        for (auto i : it)
            cout << i << " ";
        cout << '\n';
    }
}