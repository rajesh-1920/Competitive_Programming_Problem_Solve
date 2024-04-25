// Author:  Rajesh Biswas
// Date  :  25.04.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 200
#define MOD 1000000009
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
ll a[N][N],n,m;
ll res(ll i,ll j)
{
    if(i>=n||j>=m)
    return 0;
    ll t1=a[i][j]+res(i+1,j);
    ll t2=a[i][j]+res(i,j+1);
    return max(t1,t2);
}
void solve()
{
    ll i,j;
    cin>>n>>m;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    cin>>a[i][j];
    cout<<res(0,0);
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
