// Author:  Rajesh Biswas
// Date  :  10.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define scl(n) scanf("%lld", &n)
#define scc(c) scanf("%c", &c)
#define scs(s) scanf("%s", &s)
#define prl(n) printf("%lld ", n)
#define No printf("No")
#define NO printf("NO")
#define Yes printf("Yes")
#define YES printf("YES")
#define nl printf("\n")
#define rrr return
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define forn(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) forn(i, 0, n) scl(v[i]);
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define contains(a, b) (find(all(a), (b)) != (a).end())

#define PI acos(-1)
#define N 200009
#define MOD 1000000007
#define eps 0.0000000001
#define inf 9000000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
//------------------------------------------------------------------------------------
void solve(void)
{
    string s1, s2;
    stack<string> forr, bac;
    string cur = "http://www.lightoj.com/";
    while (true)
    {
        cin >> s1;
        // cout << s1 << ' ';
        if (s1 == "QUIT")
            rrr;
        else if (s1 == "FORWARD")
        {
            if (forr.empty())
                cout << ("Ignored\n");
            else
            {
                bac.push(cur);
                cur = forr.top();
                forr.pop();
                cout << cur << '\n';
            }
        }
        else if (s1 == "BACK")
        {
            if (bac.empty())
                cout << ("Ignored\n");
            else
            {
                forr.push(cur);
                cur = bac.top();
                bac.pop();
                cout << cur << '\n';
            }
        }
        else if (s1 == "VISIT")
        {
            cin >> s2;
            bac.push(cur);
            cur = s2;
            cout << cur << '\n';
            while (!forr.empty())
                forr.pop();
        }
        // cout << bac.size() << ' ' << forr.size() << '\n';
    }
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
    // getchar();
    for (T = 1; T <= test; T++)
    {
        cout << "Case " << T << ":\n";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
