// Author : Rajesh Biswas
// Date : 01.09.2023
// Problem : Iftar Party

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void);
int main(void)
{
    ll test, k = 1;
    cin>>test;
    while (test--)
    {
        cout << "Case " << k << ": ";
        solve();
        k++;
    }
    return 0;
}
void solve(void)
{
    ll p, l, dif, i;
    vector<ll> vec;
    cin >> p >> l;
    dif = p - l;
    for (i = 1; i <= (dif + 1) / i; i++)
    {
        if (dif % i == 0)
        {
            if (i > l)
                vec.push_back(i);
            if (i != (dif / i))
            {
                if ((dif / i) > l)
                    vec.push_back(dif / i);
            }
        }
    }
    sort(vec.begin(), vec.end());
    if (vec.size() == 0)
        cout << "impossible" << endl;
    else
    {
        for (i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
        cout << endl;
    }
}
