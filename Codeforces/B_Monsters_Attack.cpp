// Author:  Rajesh Biswas
// Date  :  23.02.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
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
    ll n, k, i, t, j, l;
    cin >> n >> k;
    vector<ll> a;
    vector<pair<ll, ll>> xm, xp;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        a.pb(t);
    }
    for (i = 0; i < n; i++)
    {
        cin >> t;
        if (t > 0)
            xp.ppb(t, i);
        else
            xm.ppb(-t, i);
    }
    sort(xm.rbegin(), xm.rend());
    sort(xp.rbegin(), xp.rend());
    ll cp = 0, cm = 0;
    while (true)
    {
        ll pp, pm, temp = 0;
        i = xp.size();
        j = xm.size();
        if (i == 0 && j == 0)
        {
            YES;
            rrr;
        }
        else if (i > 0 && j > 0)
        {
            i--;
            j--;
            pp = xp[i].fi;
            pm = xm[j].fi;
            if (pp - cp <= 0 || pm - cm <= 0)
            {
                NO;
                rrr;
            }
            if (pp - cp < pm - cm)
            {
            }
        }
        else if (i > 0)
        {
            i--;
            pp = xp[i].fi;
            if (pp - cp <= 0)
            {
                NO;
                rrr;
            }
            t = a[xp[i].sc] / k;
            if (a[xp[i].sc] % k)
            {
                temp = k - a[xp[i].sc] % k;
                t++;
            }
            cp += t;
            if (pp - cp <= 0)
            {
                NO;
                rrr;
            }
            xp.pop_back();
            while (true)
            {
                if (i == 0 || temp == 0)
                    break;
                if (temp >= a[xp[i - 1].sc])
                {
                    temp -= a[xp[i - 1].sc];
                    xp.pop_back();
                    i--;
                }
                else
                {
                    a[xp[i - 1].sc] -= temp;
                    break;
                }
            }
        }
        else if (j > 0)
        {
            j--;
            pm = xm[j].fi;
            if (pm - cm <= 0)
            {
                NO;
                rrr;
            }
            t = a[xm[j].sc] / k;
            if (a[xm[j].sc] % k)
            {
                temp = k - a[xm[j].sc] % k;
                t++;
            }
            cm += t;
            if (pm - cm <= 0)
            {
                NO;
                rrr;
            }
            xm.pop_back();
            while (true)
            {
                if (j == 0 || temp == 0)
                    break;
                if (temp >= a[xm[j - 1].sc])
                {
                    temp -= a[xm[j - 1].sc];
                    xm.pop_back();
                    j--;
                }
                else
                {
                    a[xm[j - 1].sc] -= temp;
                    break;
                }
            }
        }
    }

    for (auto it : xp)
        cout << it.fi << ' ' << it.sc << '\n';
    nl;
    for (auto it : xm)
        cout << it.fi << ' ' << it.sc << '\n';
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
