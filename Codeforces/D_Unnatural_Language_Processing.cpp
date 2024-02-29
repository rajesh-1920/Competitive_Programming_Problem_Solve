// Author:  Rajesh Biswas
// Date  :  08.02.2024

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
int chv(char &ch)
{
    if (ch == 'a' || ch == 'e')
        return 1;
    return 0;
}
void solve(void)
{
    ll n, i = 0;
    string s;
    cin >> n >> s;
    while (true)
    {
        if (i + 2 == n)
        {
            cout << s[i] << s[i + 1];
            nl;
            rrr;
        }
        if (i + 3 == n)
        {
            cout << s[i] << s[i + 1] << s[i + 2];
            nl;
            rrr;
        }
        if (chv(s[i + 3]) == 0)
        {
            cout << s[i] << s[i + 1] << s[i + 2] << '.';
            i += 3;
        }
        else
        {
            cout << s[i] << s[i + 1] << '.';
            i += 2;
        }
    }
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
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
/*
    for(auto &x:v)cin>>x;
*/