// Author:  Rajesh Biswas
// Date  :  19.12.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
void solve(void)
{
    ll n, i, xa, xb, xc, mx = 0, j, l;
    cin >> n;
    vecp a, b, c;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        a.ppb(j, i);
    }
    for (i = 0; i < n; i++)
    {
        cin >> j;
        b.ppb(j, i);
    }
    for (i = 0; i < n; i++)
    {
        cin >> j;
        c.ppb(j, i);
    }
    rsrt(a);
    rsrt(b);
    rsrt(c);
    {
        xa = a[0].fi;
        for (j = 0; j < n; j++)
        {
            if (a[0].sc != b[j].sc)
            {
                xb = b[j].fi;
                for (l = 0; l < n; l++)
                {
                    if (c[l].sc != a[0].sc && c[l].sc != b[j].sc)
                    {
                        xc = c[l].fi;
                        mx = max(mx, (xa + xb + xc));
                        break;
                    }
                }
                break;
            }
        }
        for (j = 0; j < n; j++)
        {
            if (a[0].sc != c[j].sc)
            {
                xc = c[j].fi;
                for (l = 0; l < n; l++)
                {
                    if (b[l].sc != a[0].sc && b[l].sc != c[j].sc)
                    {
                        xb = b[l].fi;
                        mx = max(mx, (xa + xb + xc));
                        break;
                    }
                }
                break;
            }
        }
    }
    {
        xb = b[0].fi;
        for (j = 0; j < n; j++)
        {
            if (a[j].sc != b[0].sc)
            {
                xa = a[j].fi;
                for (l = 0; l < n; l++)
                {
                    if (c[l].sc != a[j].sc && c[l].sc != b[0].sc)
                    {
                        xc = c[l].fi;
                        mx = max(mx, (xa + xb + xc));
                        break;
                    }
                }
                break;
            }
        }
        for (j = 0; j < n; j++)
        {
            if (c[j].sc != b[0].sc)
            {
                xc = c[j].fi;
                for (l = 0; l < n; l++)
                {
                    if (a[l].sc != c[j].sc && a[l].sc != b[0].sc)
                    {
                        xa = a[l].fi;
                        mx = max(mx, (xa + xb + xc));
                        break;
                    }
                }
                break;
            }
        }
    }
    {
        xc = c[0].fi;
        for (j = 0; j < n; j++)
        {
            if (a[j].sc != c[0].sc)
            {
                xa = a[j].fi;
                for (l = 0; l < n; l++)
                {
                    if (b[l].sc != a[j].sc && b[l].sc != c[0].sc)
                    {
                        xb = b[l].fi;
                        mx = max(mx, (xa + xb + xc));
                        break;
                    }
                }
                break;
            }
        }
        for (j = 0; j < n; j++)
        {
            if (b[j].sc != c[0].sc)
            {
                xb = b[j].fi;
                for (l = 0; l < n; l++)
                {
                    if (a[l].sc != b[j].sc && a[l].sc != c[0].sc)
                    {
                        xa = a[l].fi;
                        mx = max(mx, (xa + xb + xc));
                        break;
                    }
                }
                break;
            }
        }
    }
    cout << mx;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    cin >> test;
    fl(T, 0, test)
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