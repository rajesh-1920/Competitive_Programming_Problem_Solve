// Author:  Rajesh Biswas
// Date  :  18.12.2023

#include <bits/stdc++.h>
using namespace std;
typedef unsigned int ll;
//----------------------------(definition section)-------------------------------------
#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define rev(X) reverse(X.begin(), X.end())
#define pi 3.141592653589793238462643383279502884197
#define lwr(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upr(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define fl(i, b, n) for (ll i = b; i < n; i++)

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
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x, y, t, m, i, n = 0;
    map<ll, ll> mp;
    cin >> m;
    while (m--)
    {
        cin >> x >> y;
        if (x == 1)
        {
            t = 1l * (pow(2.0, (double)(y)));
            n = mp.size();
            for (auto it1 : mp)
            {
                mp[(it1.fi) + t]++;
                n--;
                if (n == 0)
                    break;
            }
            mp[t]++;
        }
        else
        {
            if (mp[y] > 0)
                YES;
            else
                NO;
        }
    }
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/