// Author:  Rajesh Biswas
// Date  :  28.04.2024

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
unordered_map<ll,ll>mp;
ll fact(ll n)
{
    if(n==0)
    return 1%MOD;
    if(mp[n])
    return mp[n]%MOD;
    else
    return mp[n]=((n%MOD)*(fact(n-1)%MOD))%MOD;
}
ll bx_pow(ll a,ll b)
{
    ll ans=1;
    while (b>0)
    {
        if(b&1)
        ans=(ans%MOD*a%MOD)%MOD;
        a=(a%MOD*a%MOD)%MOD;
        b>>=1;
    }
    return ans%MOD;
}
void solve(void)
{
    string s;
    cin >> s;
    ll n = s.size(), i;
    map<char, ll> m;
    for (i = 0; i < n; i++)
    m[s[i]]++;
    ll nom=fact(n);
    ll denom=1;
    for(auto it:m)
    denom=(denom%MOD*(fact(it.sc)%MOD))%MOD;
    cout<<((nom%MOD)*(bx_pow(denom,MOD-2)%MOD))%MOD;
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
