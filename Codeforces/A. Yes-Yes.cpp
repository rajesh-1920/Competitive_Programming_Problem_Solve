// Author:  Rajesh Biswas
// Date  :  20.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())

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
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    /*ll n, m, i, j = 0;
    string s;
    cin >> s;
    if (s.size() > 3)
    {
        for (i = 0; i < s.size() - 4; i++)
        {
            if (s[i] == 'Y' && s[i + 1] == 'e' && s[i + 2] == 's' && s[i + 3] != 's')
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";*/
    cout << __gcd(6, 3);
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    //cin >> test;
    while (test--)
        solve();
    return 0;
}
