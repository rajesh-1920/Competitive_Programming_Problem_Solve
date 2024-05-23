// Author:  Rajesh Biswas
// Date  :  28.03.2024

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
map<string, ll> mp;
string s, s1;
void allstring(string st)
{
    mp[st]++;
    if (s1 == st || mp[st] > 1)
        return;
    ll i;
    for (i = st.size() - 1; i > 0; i--)
    {
        swap(st[i], st[i - 1]);
        allstring(st);
    }
}
void solve(void)
{
    cin >> s;
    sort(s.begin(), s.end());
    s1 = s;
    sort(s1.rbegin(), s1.rend());
    allstring(s);
    cout << mp.size();
    nl;
    for (auto it : mp)
        cout << it.fi << '\n';
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