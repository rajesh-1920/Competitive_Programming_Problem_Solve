// Author:  Rajesh Biswas
// Date  :  01.11.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define pi 3.141592653589793238462643383279502884197
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);

#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

// #define dissp(n) for(auto i:n)cout<<i<<" ";cout<<'\n';
// #define dis(n) for(auto i:n)cout<<i<<'\n';
#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, m, x, y, z, i;
    cin >> n >> m;
    map<ll, ll> mp;
    for (i = 0; i < m; i++)
    {
        cin >> x >> y >> z;
        if (i == 0)
        {
            mp[x] = 1;
            mp[y] = 2;
            mp[z] = 3;
        }
        else
        {
            if (mp[x] == 0 && mp[y] == 0 && mp[z] == 0)
            {
                mp[x] = 1;
                mp[y] = 2;
                mp[z] = 3;
            }
            else if (mp[x] == 0 && mp[y] == 0)
            {
                if (mp[z] == 3)
                {
                    mp[x] = 1;
                    mp[y] = 2;
                }
                else if (mp[z] == 2)
                {
                    mp[x] = 1;
                    mp[y] = 3;
                }
                else if (mp[z] == 1)
                {
                    mp[x] = 2;
                    mp[y] = 3;
                }
            }
            else if (mp[y] == 0 && mp[z] == 0)
            {
                if (mp[x] == 3)
                {
                    mp[z] = 1;
                    mp[y] = 2;
                }
                else if (mp[x] == 2)
                {
                    mp[z] = 1;
                    mp[y] = 3;
                }
                else if (mp[x] == 1)
                {
                    mp[z] = 2;
                    mp[y] = 3;
                }
            }
            else if (mp[x] == 0 && mp[z] == 0)
            {
                if (mp[y] == 3)
                {
                    mp[z] = 1;
                    mp[x] = 2;
                }
                else if (mp[y] == 2)
                {
                    mp[z] = 1;
                    mp[x] = 3;
                }
                else if (mp[y] == 1)
                {
                    mp[z] = 2;
                    mp[x] = 3;
                }
            }
            else if (mp[x] == 0)
            {
                if (mp[y] == 3 && mp[z] == 2)
                    mp[x] = 1;
                else if (mp[y] == 1 && mp[z] == 2)
                    mp[x] = 3;
                else if (mp[y] == 3 && mp[z] == 1)
                    mp[x] = 2;
            }
            else if (mp[y] == 0)
            {
                if (mp[x] == 3 && mp[z] == 2)
                    mp[y] = 1;
                else if (mp[x] == 1 && mp[z] == 2)
                    mp[y] = 3;
                else if (mp[x] == 3 && mp[z] == 1)
                    mp[y] = 2;
            }
            else if (mp[z] == 0)
            {
                if (mp[y] == 3 && mp[x] == 2)
                    mp[z] = 1;
                else if (mp[y] == 1 && mp[x] == 2)
                    mp[z] = 3;
                else if (mp[y] == 3 && mp[x] == 1)
                    mp[z] = 2;
            }
        }
    }
    for (auto it : mp)
        cout << it.sc << ' ';
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