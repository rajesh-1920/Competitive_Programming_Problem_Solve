// Author:  Rajesh Biswas
// Date  :  06.02.2024

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
void solve(void)
{
    ll n, m, k, i, j, cnt = 0, t1, t2;
    cin >> n >> m >> k;
    map<ll, ll> mp, mpa, mpb, rma, rmb;
    ll a[n], b[m];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        mpa[a[i]]++;
    }
    for (i = 0; i < m; i++)
    {
        cin >> b[i];
        mpb[b[i]]++;
    }
    t1 = t2 = k / 2;
    for (i = 1; i <= k; i++)
    {
        if (mpa[i] > 0 && mpb[i] > 0)
        {
            rma[i]++;
            rmb[i]++;
        }
        else if (mpa[i] > 0 && t1 > 0)
            t1--;
        else if (mpb[i] > 0 && t2 > 0)
            t2--;
        else
        {
            NO;
            rrr;
        }
    }
    if (rma.size() < t1 || rmb.size() < t2)
    {
        NO;
        rrr;
    }
    YES;
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
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