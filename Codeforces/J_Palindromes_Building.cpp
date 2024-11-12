// Author:  Rajesh Biswas
// Date  :  05.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000009
#define fi first
#define sc second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fl(i, st, end) for (i = st; i < end; i++)
#define ft(i, st, end) for (i = st; i < end; i++)

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
ll fact(ll n)
{
    if (n == 0)
        return 1;
    return n * (fact(n - 1));
}
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> v(26, 0);
    for (auto it : s)
        v[it - 'a']++;
    ll d = 1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] & 1)
            ans++;
        if (ans > 1)
        {
            cout << 0 << '\n';
            rrr;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        d = d * fact(v[i] / 2);
    }
    ans = fact(n / 2);
    cout << ans / d;
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
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
