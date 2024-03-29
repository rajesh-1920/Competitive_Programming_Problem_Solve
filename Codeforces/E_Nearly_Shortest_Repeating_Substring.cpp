// Author:  Rajesh Biswas
// Date  :  28.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
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
    ll n, i, j;
    string s, t, r;
    cin >> n >> s;
    vector<ll> v;
    for (i = 1; i * i <= n; i++)
    {
        if (!(n % i))
        {
            v.push_back(i);
            if (i != n / i)
                v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());
    for (auto it : v)
    {
        j = 0;
        ll cnt = 0;
        for (i = t.size(); i < it; i++)
            t.push_back(s[i]);
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] != t[j])
                cnt++;
            j++;
            j = j % t.size();
        }
        if (cnt < 2)
        {
            cout << it;
            nl;
            rrr;
        }
        cnt = 0;
        j = 0;
        for (i = s.size() - 1; i >= 0; i--)
        {
            r.push_back(s[i]);
            j++;
            if (j == it)
                break;
        }
        reverse(r.begin(), r.end());
        j = 0;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] != r[j])
                cnt++;
            j++;
            j = j % t.size();
        }
        if (cnt < 2)
        {
            cout << it;
            nl;
            rrr;
        }
    }
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
