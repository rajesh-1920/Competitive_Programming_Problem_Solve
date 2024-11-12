// Author:  Rajesh Biswas
// Date  :  11.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 200009
#define MOD 1000000009
#define fi first
#define sc second
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fl(i, st, end) for (ll i = st; i < end; i++)

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
    ll n, m, k;
    string s;
    cin >> n >> m >> k >> s;
    s += 'L';
    ll cw = 0, pos = -1, dis = 0;
    for (int i = 0; i <= n; i++)
    {
        if (s[i] == 'L')
        {
            pos = i;
            dis = 0;
        }
        else if (s[i] == 'C')
        {
            dis++;
            if (i - pos >= m)
            {
                NO;
                rrr;
            }
        }
        else if (s[i] == 'W')
        {
            dis++;
            if (dis>= m)
            {
                cw++;
                if (cw > k)
                {
                    NO;
                    rrr;
                }
            }
        }
    }
    YES;
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