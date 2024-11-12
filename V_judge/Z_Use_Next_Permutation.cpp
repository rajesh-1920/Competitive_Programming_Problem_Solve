// Author:  Rajesh Biswas
// Date  :  12.07.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) forn(i, 0, n) scl(v[i]);
#define scl(n) scanf("%lld", &n)
#define scc(c) scanf("%c", &c)
#define scs(s) scanf("%s", &s)
#define prl(n) printf("%lld ", n)
#define No printf("No")
#define NO printf("NO")
#define Yes printf("Yes")
#define YES printf("YES")
#define nl cout << '\n'
#define rrr return
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

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
string bin(ll n)
{
    string s = "";
    while (n > 0)
    {
        if (n & 1)
            s.pb('1');
        else
            s.pb('0');
        n /= 2;
    }
    rrr s;
}
void solve(void)
{
    ll n;
    cin >> n;
    string s = bin(n);
    s.pb('0');
    reverse(all(s));
    // cout<<s;
    // nl;
    ll z = -1;
    for (int i = s.size() - 1; i > 0; i--)
    {
        if (s[i] == '1' && s[i - 1] == '0')
        {
            swap(s[i], s[i - 1]);
            z = i;
            break;
        }
    }
    // cout << z;
    // nl;
    for (int i = s.size() - 1; i > z; i--)
    {
        if (s[i] == '0')
            for (int j = z + 1; j < i; j++)
            {
                if (s[j] == '1')
                {
                    swap(s[i], s[j]);
                }
            }
    }
    // cout << s;
    // nl;

    reverse(all(s));
    ll t = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            t |= (1LL << i);
    }
    cout << t;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
