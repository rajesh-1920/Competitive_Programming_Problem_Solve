// Author:  Rajesh Biswas
// Date  :  11.03.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 3000000 + 100
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n" a
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve()
{
    ll n, m, x, k, d;
    char ch;
    cin >> n >> m >> x;
    set<ll> a;
    a.insert(x);
    while (m--)
    {
        set<ll> temp;
        ll t1, t2;
        cin >> d >> ch;
        if (ch == '0')
        {
            for (auto it : a)
            {
                t1 = it + d;
                t1 %= n;
                if (!t1)
                    t1 = n;
                temp.insert(t1);
            }
        }
        else if (ch == '1')
        {
            for (auto it : a)
            {
                t1 = it - d + n;
                t1 %= n;
                if (!t1)
                    t1 = n;
                temp.insert(t1);
            }
        }
        else
        {
            for (auto it : a)
            {
                t1 = it + d;
                t2 = it - d + n;
                t1 %= n;
                t2 %= n;
                if (!t1)
                    t1 = n;
                if (!t2)
                    t2 = n;
                temp.insert(t1);
                temp.insert(t2);
            }
        }
        a.clear();
        a = temp;
    }
    cout << a.size();
    nl;
    for (auto it : a)
        cout << it << ' ';
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
/*
    for(auto &x:v)cin>>x;
*/
