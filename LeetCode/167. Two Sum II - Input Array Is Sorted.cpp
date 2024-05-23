#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int i = 1, j = numbers.size(), s = 0;
    while (i < j)
    {
        s = numbers[i - 1] + numbers[j - 1];
        if (s == target)
            break;
        else if (s < target)
            i++;
        else
            j--;
    }
    vector<int> v = {i, j};
    return v;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    twoSum(nums, 9);
}