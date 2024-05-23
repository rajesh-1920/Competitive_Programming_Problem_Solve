// Author:  Rajesh Biswas
// Date  :  03.12.2023

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
    ll n, p, l, t, cnt, temp, c;
    cin >> n >> p >> l >> t;
    c = n / 7;
    if (n % 7 != 0)
        c++;
    while (n >= 8)
    {
        if (p <= 0)
        {
            cout << n;
            nl;
            rrr;
        }
        if (c >= 2)
        {
            temp = (p / (c * (2 * t + l)));
            if ((p % (c * (2 * t + l))) != 0)
                temp++;
            p -= (temp * (c * (2 * t + l)));
            n -= temp;
            c = 0;
        }
        else if (c == 1)
        {
            p -= (t + l);
            c--;
            n--;
        }
        else
        {
            temp = (p / l);
            if (p % l > 0)
                temp++;
            cout << (n - temp);
            nl;
            rrr;
        }
    }
    while (n >= 0)
    {
        if (p <= 0)
        {
            cout << n;
            nl;
            rrr;
        }
        if (c >= 1)
        {
            p -= (t * c + l);
            c = 0;
        }
        else
        {
            temp = (p / l);
            if (p % l > 0)
                temp++;
            cout << (n - temp);
            nl;
            rrr;
        }
        n--;
    }
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