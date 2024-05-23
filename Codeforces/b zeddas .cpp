// Author:  Rajesh Biswas
// Date  :  16.12.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define rev(X) reverse(X.begin(), X.end())
#define pi 3.141592653589793238462643383279502884197
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define fl(i, b, n) for (ll i = b; i < n; i++)

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
ll a[1000000];
vector<ll> g[1000000];
void solve(void)
{
    ll n, i, x, y, cnt = 0, j;
    cin >> n;
    vecp s;
    map<ll, ll> mp;
    for (i = 1; i < n; i++)
    {
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
        mp[i]++;
    }
    mp[n]++;
    for (i = 1; i <= n; i++)
    {
        /*if (mp.size() <= 1)
        {
            cout << cnt;
            nl;
            rrr;
        }*/
        /*for (auto ch : g[i])
        {
            cout << ch << ' ';
            if (mp[ch] > 0)
                mp.erase(ch);
        }
        nl;
        for (j = 1; j <= n; j++)
        {
            if (mp[j] == 1)
            {
                g[i].pb(j);
                break;
            }
        }*/
        cnt++;
    }
    // cout << cnt;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    cin >> test;
    fl(T, 0, test)
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