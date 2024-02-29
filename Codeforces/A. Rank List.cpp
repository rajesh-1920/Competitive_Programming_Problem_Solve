// Author:  Rajesh Biswas
// Date  :  02.11.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fi first
#define sc second
#define vecp vector<pair<ll, ll>>
int cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.fi <= b.fi)
    {
      if(a.fi==b.fi)
       return a.sc<b.sc;
       return a.fi>b.fi;
    }
    return 1;  
}
void solve(void)
{
    ll n, k, i, x, y;
    vecp a;
    map<pair<ll, ll>, ll> res;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        a.push_back({x, y});
        res[{x, y}]++;
    }
    sort(a.begin(), a.end(), cmp);
    cout << (res[a[k - 1]]) << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    // cin>>test;
    while (test--)
        solve();
    return 0;
}
