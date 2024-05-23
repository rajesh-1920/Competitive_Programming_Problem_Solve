#include <bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int i, mn = INT_MAX, pos = 0;
    for (pos = 0; pos < gas.size(); pos++)
    {
        mn = gas[pos];
        bool fl = true;
        for (i = pos + 1; i < gas.size(); i++)
        {
            mn -= cost[i - 1];
            if (mn < 0)
            {
                fl = false;
                break;
            }
            mn += gas[i];
        }
        for (i = 0; i <= pos; i++)
        {
            if (i == 0)
                mn -= cost[gas.size() - 1];
            else
                mn -= cost[i - 1];
            if (mn < 0)
            {
                fl = false;
                break;
            }
            mn += gas[i];
        }
        if (fl)
            return pos;
    }
    return -1;
    // for (i = 0; i < gas.size(); i++)
    // {
    //     if (mn >= gas[i])
    //     {
    //         pos = i;
    //         mn = gas[i];
    //     }
    // }
    // mn = gas[pos];
    // for (i = pos + 1; i < gas.size(); i++)
    // {
    //     mn -= cost[i - 1];
    //     if (mn < 0)
    //         return -1;
    //     mn += gas[i];
    // }
    // for (i = 0; i <= pos; i++)
    // {
    //     if (i == 0)
    //         mn -= cost[gas.size() - 1];
    //     else
    //         mn -= cost[i - 1];
    //     if (mn < 0)
    //         return -1;
    //     mn += gas[i];
    // }
    // if (mn < 0)
    //     return -1;
    // return pos;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5}, c = {3, 4, 5, 1, 2};
    cout << canCompleteCircuit(nums, c);
}