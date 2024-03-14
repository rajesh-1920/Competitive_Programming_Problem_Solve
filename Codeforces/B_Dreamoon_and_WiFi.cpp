// Author:  Rajesh Biswas
// Date  :  14.03.2024

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
ll number_of_permutation(ll n)
{
    ll i, j, t1, t2;
    for (i = 0; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            string x;
            for (t2 = 0; t2 < j; t2++)
                x.pb('+');
            for (t2 = 0; t2 < j; t2++)
                x.pb('-');
            
        }
    }
}
ll fact(ll n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    ll i, acpos = 0, pos = 0, cnt = 0;
    for (i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '+')
            acpos++;
        else if (s1[i] == '-')
            acpos--;
    }
    for (i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '+')
            pos++;
        else if (s2[i] == '-')
            pos--;
        else
            cnt++;
    }
    double res;
    if (pos == acpos)
    {
        if (!cnt)
            res = 1;
        else if (cnt & 1)
            res = 0;
        else
            res = 1.0 / fact(cnt);
        cout << res;
        nl;
        rrr;
    }
    if (pos - cnt <= acpos && acpos <= pos + cnt)
    {
        if (!cnt)
            res = 0;
        else
            res = 1.0 / fact(cnt);
        cout << res;
        nl;
        rrr;
    }
    else
    {
        res = 0;
        cout << res;
        nl;
        rrr;
    }
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(12);
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
/*
    for(auto &x:v)cin>>x;
*/
