#include <bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int i, mn = INT_MAX, pos = 0;
    for (i = 0; i < gas.size(); i++)
    {
        if (mn >= cost[i])
        {
            pos = i;
            mn = gas[i];
        }
    }
    mn = gas[pos];
    for (i = pos + 1; i < gas.size(); i++)
    {
        mn += gas[i];
        mn -= cost[i - 1];
        if (mn < 0)
            return -1;
    }
    for (i = 0; i <=pos; i++)
    {
        mn += gas[i];
        if (i == 0)
            mn -= cost[gas.size() - 1];
        else
            mn -= cost[i - 1];
        if (mn < 0)
            return -1;
    }
    return pos;
}
int main()
{
    vector<int> nums = {2, 3, 4}, c = {3, 4, 3};
    cout << canCompleteCircuit(nums, c);
}