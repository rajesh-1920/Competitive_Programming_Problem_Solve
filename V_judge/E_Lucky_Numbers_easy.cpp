// Author:  Rajesh Biswas
// Date  :  14.07.2024

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
#define N 100009
//------------------------------------------------------------------------------------
void solve(void)
{
    string s, t = "";
    cin >> s;
    ll fl = 0, x = x = 1, c4 = 0, c7 = 0, temp = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < '7')
        {
            x = 0;
            break;
        }
        else if (s[i] > '7')
        {
            t.pb('4');
            fl = 1;
            c4++;
            x = 0;
            temp = 1;
            break;
        }
    }
    if (x)
    {
        t.pb('4');
        fl = 1;
        c4++;
        temp = 1;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (fl)
        {
            if (c4 <= c7)
            {
                t.pb('4');
                c4++;
            }
            else
            {
                t.pb('7');
                c7++;
            }
        }
        else
        {
            if (s[i] < '4')
            {
                t.pb('4');
                fl = 1;
                c4++;
            }
            else if (s[i] == '4')
            {
                t.pb('4');
                c4++;
            }
            else if (s[i] == '7')
            {
                t.pb('7');
                c7++;
            }
            else
            {
                t.pb('7');
                fl = 1;
                c7++;
            }
        }
    }
    // cout<<c7<<' '<<c4;nl;
    ll i = 0, j = 0;
    fl = 0;
    if (temp)
        j = 1;
    while (i < s.size())
    {
        if (fl)
        {
            if (c4 > c7 && t[j] == '4')
            {

                t[j] = '7';
                c7++;
                c4--;
            }
            else if (c4 < c7 && t[j] == '7')
            {
                t[j] = '4';
                c7--;
                c4++;
            }
        }
        else
        {
            if (c4 > c7 && s[i] < '7' && s[i] != '4' && t[j] == '4')
            {
                t[j] = '7';
                c7++;
                c4--;
                fl = 1;
            }
            else if (c4 < c7 && s[i] < '4' && s[i] != '7' && t[j] == '7')
            {
                t[j] = '4';
                c7--;
                c4++;
                fl = 1;
            }
        }
        i++;
        j++;
    }
    // cout << c7 << ' ' << c4;
    nl;
    cout << t;
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
