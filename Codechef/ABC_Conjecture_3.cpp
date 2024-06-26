// Author:  Rajesh Biswas
// Date  :  08.05.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N (1LL * 1e18)
#define MOD ((1LL * 1e9) + 7)
#define sn 3000000 + 100
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
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int ca[n], cc[n], nb[n], fb[n], t = -1;
    int cnt = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        fb[i] = t;
        if (s[i] == 'b')
            t = i;
        cnt += (s[i] == 'a');
        ca[i] = cnt;
    }
    cnt = 0;
    t = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        nb[i] = t;
        if (s[i] == 'b')
            t = i;
        cnt += (s[i] == 'c');
        cc[i] = cnt;
    }
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        t = nb[i];
        if (t == -1)
            break;
        if (s[i] == 'a')
        {
            if (cc[t] == 0)
                break;
            cnt++;
        }
    }
    int mn=cnt;
    cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        t = fb[i];
        if (t == -1)
            break;
        if (s[i] == 'c')
        {
            if (ca[t] == 0)
                break;
            cnt++;
        }
    }
    cout << min(mn, cnt);
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
