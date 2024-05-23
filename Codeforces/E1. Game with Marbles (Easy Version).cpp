// Author:  Rajesh Biswas
// Date  :  19.12.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define rev(X) reverse(X.begin(), X.end())
#define pi 3.141592653589793238462643383279502884197
#define lwr(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upr(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define fl(i, b, n) for (ll i = b; i < n; i++)

#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

// #define dissp(n) for(auto i:n)cout<<i<<" ";cout<<'\n';
// #define dis(n) for(auto i:n)cout<<i<<'\n';
#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
bool cmp(pa a, pa b)
{
    return a.sc > b.sc;
}
void solve(void)
{
    ll i, n, x, sa = 0, sb = 0;
    vecp a;
    cin >> n;
    ll t[n];
    for (i = 0; i < n; i++)
    {
        cin >> t[i];
        sa += t[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> x;
        a.ppb(t[i], x);
        sb += x;
    }
    for (i = 0; i < n; i++)
    {

        if (i % 2 == 0)
        {
            sort(a.begin(), a.end(), cmp);
            a[0].fi = -1e12;
            sa--;
            sb -= a[0].sc;
            a[0].sc = -1e12;
        }
        else
        {
            rsrt(a);
            a[0].sc = -1e12;
            sb--;
            sa -= a[0].fi;
            a[0].fi = -1e12;
        }
       
    }
    cout << sa - sb;
    nl;
    /*for (i = 0; i < n; i++)
        cout << a[i].fi << ' ' << a[i].sc << '\n';
        nl;*/
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    cin >> test;
    fl(T, 0, test)
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