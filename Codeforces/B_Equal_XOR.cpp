// Author:  Rajesh Biswas
// Date  :  16.03.2024

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
    ll n, k, x, i, cnt = 0;
    cin >> n >> k;
    map<ll, ll> m1, m2;
    multiset<ll> a, b, resa, resb;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        a.insert(x);
        m1[x]++;
    }
    for (i = 0; i < n; i++)
    {
        cin >> x;
        b.insert(x);
        m2[x]++;
    }
    cnt = resb.size();
    for (auto it : b)
    {
        if (cnt == 2 * k)
            break;
        if (m2[it] == 2)
        {
            cnt++;
            resb.insert(it);
        }
    }
    cnt = resa.size();
    for (auto it : a)
    {
        if (cnt == 2 * k)
            break;
        if (m1[it] == 2)
        {
            cnt++;
            resa.insert(it);
        }
    }
    for (auto it : a)
    {
        if (cnt == 2 * k)
            break;
        if (m2[it] == 1)
        {
            m2[it]--;
            m1[it]--;
            resa.insert(it);
            resb.insert(it);
            cnt++;
        }
    }
    for (auto it : b)
    {
        if (cnt == 2 * k)
            break;
        if (m1[it] == 1)
        {
            m1[it]--;
            m2[it]--;
            resa.insert(it);
            resb.insert(it);
            cnt++;
        }
    }
    for (auto it : resa)
        cout << it << ' ';
    nl;
    for (auto it : resb)
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
