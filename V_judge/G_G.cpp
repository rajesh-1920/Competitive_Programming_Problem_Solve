// Author:  Rajesh Biswas
// Date  :  05.06.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000007
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
    ll n, m;
    cin >> n >> m;
    set<int> s, tt;
    for (int i = 1; i <= n; i++)
    {
        s.insert(i);
        tt.insert(i);
    }
    map<pair<int, int>, int> mp;
    map<int, int> a, t;
    int cnt = 0, st = 1;
    while (true)
    {
        if (tt.size() == 0)
            break;
        if (a[st] > 0)
        {
            s.insert(a[st]);
            t[a[st]]++;
            if (t[a[st]] == m)
                tt.erase(a[st]);
            a[st] = 0;
        }
        for (auto it : s)
        {
            if (mp[{it, st}] == 0)
            {
                a[st] = it;
                mp[{it, st}] = 1;
                s.erase(it);
                break;
            }
        }
        st++;
        if (st > m)
            st = 1;
        cnt++;
    }
    cout << cnt * 5;
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
        cout << "Case " << T << ": ";
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
