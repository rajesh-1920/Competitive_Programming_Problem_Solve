// Author:  Rajesh Biswas
// Date  :  20.09.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define f(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) f(i, 0, n) cin >> (v[i]);
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
#define N 100009
ll lp[N];
bool notprime[N];
void sieve()
{
    notprime[0] = notprime[1] = true;
    lp[1] = 1;
    lp[2] = 2;
    for (ll i = 4; i < N; i += 2)
    {
        notprime[i] = true;
        lp[i] = 2;
    }
    for (ll i = 3; i < N; i += 2)
    {
        if (!notprime[i])
        {
            lp[i] = i;
            for (ll j = i + i; i < N; j += i)
            {
                notprime[j] = true;
                lp[j] = lp[j] == 0 ? i : lp[j];
            }
        }
    }
}
//------------------------------------------------------------------------------------
struct pri_fac
{
    
};
void solve(void)
{
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
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