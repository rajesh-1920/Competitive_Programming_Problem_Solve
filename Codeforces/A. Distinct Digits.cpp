// Author : Rajesh Biswas
// Date : 30.08.2023
// Problem : F - Distinct Digits
// Contest : Post Exam Marathon Contest by CSE-CLUB, PSTU
// Password : THINK

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll check_distinct(ll n);
int main(void)
{
    ll l, r, res = -1, i;
    cin >> l >> r;
    for (i = l; i <= r; i++)
    {
        if (check_distinct(i) == 1)
        {
            res = i;
            break;
        }
    }
    cout << res << endl;
}
ll check_distinct(ll n)
{
    ll r[10][1] = {0}, t;
    while (n > 0)
    {
        t = n % 10;
        n /= 10;
        r[t][1]++;
        if (r[t][1] > 1)
            return 0;
    }
    return 1;
}