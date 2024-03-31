#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int mxl = 0, mxr = 0, ans = 0, l = 0, r = height.size() - 1, fl = 1, pr, pl;
    while (l < r)
    {
        if (mxl < height[l])
        {
            mxl = height[l];
            pl = l;
        }
        if (mxr < height[r])
        {
            mxr = height[r];
            pr = r;
        }
        ans = max(ans, (min(mxl, mxr) * (pr - pl)));
        if (fl & 1)
            l++;
        else
            r--;
        fl++;
    }
    fl = l = mxl = mxr = 0;
    r = height.size() - 1;
    while (l < r)
    {
        if (mxl < height[l])
        {
            mxl = height[l];
            pl = l;
        }
        if (mxr < height[r])
        {
            mxr = height[r];
            pr = r;
        }
        ans = max(ans, (min(mxl, mxr) * (pr - pl)));
        if (fl & 1)
            l++;
        else
            r--;
        fl++;
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 4, 3};
    cout << maxArea(nums);
}