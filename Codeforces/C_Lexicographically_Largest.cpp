// Author:  Rajesh Biswas
// Date  :  17.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define all(x) x.begin(), x.end()
#define srt(X) sort(all(X))
#define rev(X) reverse(all(X))
#define rsrt(X) sort(X.rbegin(), X.rend())
#define pi 3.141592653589793238462643383279502884197

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
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
bool cmp(pa a, pa b)
{
    if (a.fi < b.fi)
        return true;
    else if (a.fi > b.fi)
        return false;
    else
        return a.sc > b.sc;
}
void solve(void)
{
    ll n, i = 1, x;
    cin >> n;
    map<ll, ll> mp;
    vector<pair<ll, ll>> a, b;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        a.ppb(x + i, i);
    }
   /* while (true)
    {
        b.clear();
        b=a;
        sort(a.begin(), a.end(), cmp);
        auto it=max_element(all(a));
        x = (*it).fi;
        cout<<x<<' ';
        if (x <= 0)
            break;
        mp[x]++;
        x = (*it).sc;
        cout<<x<<'\n';
        //a.clear();
        //a=b;
        a[x-1].fi=-1;
        for (i = x-1; i < a.size(); i++)
        {
            a[i].fi--;
            a[i].sc--;
        }
    }*/

    ll t = mp.size();
    auto it = --mp.end();
    while (true)
    {
        if (t == 0)
            break;
        cout << (*it).fi << ' ';
        t--;
        it--;
    }
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
        // cout << "Case " << T << " : ";
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