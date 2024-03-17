#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int cur = prices.front(), res=0;
    for (auto it : prices)
    {
        if (cur <= it)
        {
            res += (it - cur);
            cur = it;
        }
        else
            cur = it;
    }
    return res;
}

int main()
{
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(nums);
}