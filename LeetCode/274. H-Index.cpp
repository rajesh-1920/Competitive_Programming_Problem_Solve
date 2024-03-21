#include <bits/stdc++.h>
using namespace std;

int hIndex(vector<int> &citations)
{
    sort(citations.begin(), citations.end());
    int mx = 0, i, n = citations.size();
    for (i = 0; i < n; i++)
    {
        if (citations[i] >= (n - i))
            mx = max(mx, (n - i));
    }
    return mx;
}

int main()
{
    vector<int> nums = {1,3,1};
    cout << hIndex(nums);
}