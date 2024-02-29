// Author:  Rajesh Biswas
// Date  :  11.02.2024

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
    ll n, i, j, cnt = 0, x, fl = 1;
    cin >> n;
    vec a;
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        if (mp[x] == 0)
            a.pb(x);
        mp[x]++;
    }
    srt(a);
    i = 0;
    j = 0;
    x = 0;
    while (true)
    {
        if (i == a.size())
            break;
        if (a[j] - a[i] < n)
        {
            x = max(x, (j - i + 1));
            if (j < a.size() - 1)
                j++;
            else
                i++;
        }
        else
            i++;
    }
    cout << x;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(0);
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