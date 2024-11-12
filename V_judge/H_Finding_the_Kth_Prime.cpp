// Author:  Rajesh Biswas
// Date  :  15.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) forn(i, 0, n) cin >> (v[i]);
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
#define inf 9000000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
//------------------------------------------------------------------------------------
int N = 100000000;
vector<int> ans;
bool a[100000009];
void sieve()
{
    for (int i = 3; i * i <= N; i += 2)
    {
        if (a[i] == false)
        {
            // ans.pb(i);
            for (int j = i * i; j <= N; j += i)
                a[j] = true;
        }
    }
    ans.pb(2);
    for (int i = 3; i <= N; i += 2)
        if (a[i] == false)
            ans.pb(i);
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        int k;
        cin >> k;
        cout << ans[k - 1];
        nl;
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
