// Author:  Rajesh Biswas
// Date  :  07.12.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define pi 3.141592653589793238462643383279502884197
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);

#define pa pair<ll, ll>
#define vec vector<ll>
#define vecp vector<pa>
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

// #define dissp(n) for(auto i:n)cout<<i<<" ";cout<<'\n';
// #define dis(n) for(auto i:n)cout<<i<<'\n';
#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
void solve(void)
{
    string s, res;
    ll n, a, b, i;
    cin >> n >> a >> b;
    char ch = 'a';
    for (i = 0; i < b; i++)
    {
        s.pb(ch);
        ch++;
    }
    ch--;
    for (i; i < a; i++)
        s.pb(ch);
    i = 0;
    while (true)
    {
        if (i + a == n)
        {
            res += s;
            break;
        }
        else if (i + a > n)
        {
            b = res.size();
            i = 0;
            for (b; b < n; b++)
            {
                res.pb(s[i]);
                i++;
            }
            break;
        }
        res += s;
        i += a;
    }
    cout << res;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
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