// MH_Nazmul
// Let it be as simple

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define nl cout << "\n"
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define f(a, b, c) for (int a = b; a < c; a++)
#define cin(vec, n) \
    f(i, 0, n) { cin >> vec[i]; }
using ll = long long;
const int N = 2e5 + 10;
const int M = 1e9 + 7;

void solve(void)
{
    int n, l;
    cin >> n >> l;
    string s, c, m;
    cin >> s >> c >> m;
    map<char, int> mp, exist;
    f(i, 0, n)
    {
        exist[s[i]]++;
        if (c[i] == '0')
            mp[s[i]] = 0;
        else
        {
            if (mp[s[i]] != 0)
                mp[s[i]] = min(mp[s[i]], c[i] - '0');
            else
                mp[s[i]] = c[i] - '0';
        }
    }

    ll cost = 0;
    f(i, 0, l)
    {
        if (exist[m[i]] == 0)
        {
            cout << "-1\n";
            return;
        }
        cost += mp[m[i]];
    }

    cout << cost << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}