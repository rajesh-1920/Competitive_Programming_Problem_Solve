// Author:  Rajesh Biswas
// Date  :  05.04.2024

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
    ll n, sum = 0, mx = 0, i, j, x;
    cin >> n;
    vector<ll> v;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    while (v.size() > 3)
    {
        auto it = max_element(all(v));
        i = (it - v.begin());
        if (i > 1)
        {
            it--;
            i--;
        }
        else
        {
            i++;
            it++;
        }
        sum += (v[i - 1] * v[i + 1]);
        v.erase(it);
    }
    if (v[1] * 2 > (v[0] * v[2] + (2 * (max(v[0], v[2])))))
        sum += v[1] * 2;
    else
        sum += ((v[0] * v[2] + (2 * (max(v[0], v[2])))));
    cout << sum;
    nl;
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
