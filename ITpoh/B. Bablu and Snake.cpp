// Author:  Rajesh Biswas
// Date  :  05.04.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define all(x) x.begin(), x.end()
#define srt(X) sort(all(X))
#define rev(X) reverse(all(X))
#define rsrt(X) sort(X.rbegin(), X.rend())
#define pi 3.141592653589793238462643383279502884197

#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
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
void solve(void)
{
    ll n, i, j;
    cin >> n;
    i = n + 10;
    i %= 30;
    string s1 = "..............................\n";
    string s2 = "..............................";
    n = 9;
    for (j = i; n; j++)
    {
        j %= 30;
        n--;
        s2[j] = '-';
    }
    s2[i] = 'T';
    j %= 30;
    n--;
    s2[j] = 'H';
    cout << s1 << s1;
    cout << s2 << '\n';
    cout << s1 << s1;
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
        cout << "Case #" << T << ":\n";
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
