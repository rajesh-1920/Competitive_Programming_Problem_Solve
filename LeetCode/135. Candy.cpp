#include <bits/stdc++.h>
using namespace std;

int candy(vector<int> &ratings)
{
    int res = ratings.size(), i;
    if (res == 1)
        return 1;
    vector<int> v(res, 1);
    for (i = 1; i < ratings.size() - 1; i++)
    {
        if (ratings[i] > ratings[i - 1])
        {
            v[i] = v[i - 1] + 1;
        }
    }
    if (ratings[0] > ratings[1])
        v[0] = v[1] + 1;
    if (ratings[res - 1] > ratings[res - 2])
        v[res - 1] = v[res - 2] + 1;
    res = 0;
    for (auto it : v)
        res += it;
    return res;
}

int main()
{
    vector<int> nums = {1, 2, 2};
    cout << candy(nums);
} // 1 2 2