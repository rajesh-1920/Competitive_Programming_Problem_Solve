// Author:  Rajesh Biswas
// Date  :  28.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N 1LL * 1e18
#define MOD ((1LL * 1e9) + 7)
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
void solve(void)
{
    ll i, j, n, a, b, mx = 0, cnt;
    cin >> n;
    map<ll, ll> mp;
    vector<pair<ll, ll>> s;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        s.push_back({a, b});
        if (mp[a] == 0 || mp[a] > b)
            mp[a] = b;
    }
    sort(s.begin(), s.end());
    for (i = 0; i < n; i++)
    {
        if (mx > (n - i + 10))
            break;
        cnt = 1;
        for (j = i + 1; j < n; j++)
        {
            cnt = 1;
            a = s[i].sc;
            b = s[j].fi;
            if (b >= a)
            {
                //while (true)
                {
                    auto iit = lower_bound(s.begin(), s.end(), a);
                    //if (iit == s.end())
                       // break;
                    //a = (iit)->fi;
                    a = mp[a];
                    cnt++;
                }
            }
            mx = max(cnt, mx);
        }
    }
    cout << mx;
    /*for (auto it : s)
    {
        cout << it.fi << ' ' << it.sc;
        nl;
    }*/
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
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
