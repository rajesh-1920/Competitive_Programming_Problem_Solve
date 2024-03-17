#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    if (1 >= prices.size())
        return 0;
    int i, mx = 0, s[prices.size()];
    for (i = prices.size() - 1; i >= 0; i--)
    {
        mx = max(mx, prices[i]);
        s[i] = mx;
    }
    mx = 0;
    for (i = 0; i + 1 < prices.size(); i++)
    {
        mx = max(mx, (s[i + 1] - prices[i]));
    }
    return mx;
}

int main()
{
    vector<int> nums = {7, 6, 4, 3, 1};
    cout << maxProfit(nums);
}