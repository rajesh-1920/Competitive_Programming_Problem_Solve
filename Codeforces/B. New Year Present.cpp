// Author:  Rajesh Biswas
// Date  :  29.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())

#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, i, x, cnt = 0;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    x = 0;
    while (cnt < (1e6))
    {
        if (mp[0] == n)
            rrr;
        if (x % 2 == 0)
        {
            if (x == 0)
            {
                for (i = 0; i < n; i++)
                {
                    if (a[i] > 0)
                    {
                        cout << 'P';
                        mp[a[i]]--;
                        a[i]--;
                        mp[a[i]]++;
                        cnt++;
                    }
                    if (i < n - 1)
                    {
                        cnt++;
                        cout << 'R';
                    }
                }
            }
            else
            {
                for (i = 0; i < n - 1; i++)
                {
                    if (i < n - 1)
                    {
                        cnt++;
                        cout << 'R';
                    }
                    if (a[i + 1] > 0)
                    {
                        cout << 'P';
                        mp[a[i + 1]]--;
                        a[i + 1]--;
                        mp[a[i + 1]]++;
                        cnt++;
                    }
                    if (mp[0] == n)
                        rrr;
                }
            }
        }
        else
        {
            for (i = n - 1; i > 0; i--)
            {
                if (i > 0)
                {
                    cnt++;
                    cout << 'L';
                }
                if (a[i - 1] > 0)
                {
                    cout << 'P';
                    mp[a[i - 1]]--;
                    a[i - 1]--;
                    mp[a[i - 1]]++;
                    cnt++;
                }
                if (mp[0] == n)
                    rrr;
            }
        }
        x++;
    }
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << " : ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/