// Author:  Rajesh Biswas
// Date  :  07.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 3000000 + 100
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve()
{
    ll n, res = 0, i, j, mn = 10000000000;
    string s;
    cin >> s;
    map<char, ll> mp;
    i = 0, j = 0;
    while (true)
    {
        if (i == s.size())
            break;
        if (!mp['1'])
            mp.erase('1');
        if (!mp['2'])
            mp.erase('2');
        if (!mp['3'])
            mp.erase('3');
        if (mp.size() == 3)
        {
            res = (j - i);
            mn = min(mn, res);
            mp[s[i]]--;
            i++;
        }
        else if (j < s.size())
        {
            mp[s[j]]++;
            j++;
        }
        else
        {
            mp[s[i]]--;
            i++;
        }
    }
    if (mn == 10000000000)
        mn = 0;
    cout << mn;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
/*
    for(auto &x:v)cin>>x;
*/
