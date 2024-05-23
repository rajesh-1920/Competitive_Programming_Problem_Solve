// Author:  Rajesh Biswas
// Date  :  04.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define fi first
#define sc second
#define pb(x) push_back(x)

#define no cout << "No\n"
#define yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, i, x;
    map<ll, ll> mp;
    map<ll, ll>::iterator it, it1;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    it = mp.begin();
    for (i = 0; i <= n; i++)
    {
        if (it == mp.end())
            break;
        if (i < ((*it).fi))
        {
            NO;
            return;
        }
        it++;
    }
    it = mp.begin();
    it1 = mp.begin();
    it1++;
    while (it1 != mp.end())
    {
        if (((*it).sc) < ((*it1).sc))
        {
            NO;
            return;
        }
        it1++;
        it++;
    }
    YES;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
