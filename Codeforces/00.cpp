// Author:  Rajesh Biswas
// Date  :  20.10.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define f(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) f(i, 0, n) cin >> (v[i]);
#define dbg(x) cout << #x << " = " << x << '\n';
#define No cout << ("No\n")
#define NO cout << ("NO\n")
#define Yes cout << ("Yes\n")
#define YES cout << ("YES\n")
#define nl cout << ("\n")
#define rrr return
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define contains(a, b) (find(all(a), (b)) != (a).end())

#define PI acos(-1)
#define MOD 1000000007
#define eps 0.0000000001
#define inf 90000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 200009
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n;
    cin >> n;
    ll a[n + 5];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    ll cnt = 0;
    for (ll i = 1; i < n; i++)
    {
        // cout<<a[i]<<' ';
        if (a[i] == a[i + 1])
        {
            cnt++;
            // dbg(i);
        }
    }
    ll mn = cnt;
    // cout<<mn<<' ';
    for (ll i = 1; i <= n / 2; i++)
    {
        ll t = (n - i) + 1;
        cnt = mn;
        if (a[i] == a[t])
            continue;
        if (i == 1)
        {
            if (a[i] == a[i + 1])
                cnt--;
            if (a[t] == a[t - 1])
                cnt--;

            if (a[i] == a[t - 1])
                cnt++;
            if (a[t] == a[i + 1])
                cnt++;
            if (mn > cnt)
            {
                mn = cnt;
                swap(a[i], a[t]);
            }
            continue;
        }
        if (a[i] == a[i + 1])
            cnt--;
        if (a[t] == a[t - 1])
            cnt--;
        if (a[t] == a[t + 1])
            cnt--;
        if (a[i] == a[i - 1])
            cnt--;

        if (a[i] == a[t - 1])
            cnt++;
        if (a[t] == a[i + 1])
            cnt++;
        if (a[i] == a[t + 1])
            cnt++;
        if (a[t] == a[i - 1])
            cnt++;
        if (mn > cnt)
        {
            dbg(cnt)
            mn = cnt;
            swap(a[i], a[t]);
        }
    }
    cout << mn;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
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