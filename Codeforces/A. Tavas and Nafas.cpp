// Author:  Rajesh Biswas
// Date  :  11.01.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define all(x) (x).begin(), (x).end()
#define srt(X) sort(all(X))
#define rev(X) reverse(all(X))
#define rsrt(X) sort(X.rbegin(), X.rend())
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
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
string on(ll n);
string tt(ll n);
string ten(ll n);
void solve(void)
{
    ll n, x;
    cin >> n;
    if (n < 10)
        cout << on(n);
    else if (n >= 10 && n <= 19)
        cout << ten(n);
    else
    {
        x = n % 10;
        n /= 10;
        cout << tt(n);
        if (x != 0)
            cout << '-' << on(x);
    }
}
//------------------------------------------------------------------------------------
int main()
{
    cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    // cin >> test;
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
/*
    for(auto &x:v)cin>>x;
*/
string ten(ll n)
{
    if (n == 10)
        return "ten";
    if (n == 11)
        return "eleven";
    if (n == 12)
        return "twelve";
    if (n == 13)
        return "thirteen";
    if (n == 14)
        return "fourteen";
    if (n == 15)
        return "fifteen";
    if (n == 16)
        return "sixteen";
    if (n == 17)
        return "seventeen";
    if (n == 18)
        return "eighteen";
    if (n == 19)
        return "nineteen";
}
string tt(ll n)
{
    if (n == 2)
        return "twenty";
    if (n == 3)
        return "thirty";
    if (n == 4)
        return "forty";
    if (n == 5)
        return "fifty";
    if (n == 6)
        return "sixty";
    if (n == 7)
        return "seventy";
    if (n == 8)
        return "eighty";
    if (n == 9)
        return "ninety";
}
string on(ll n)
{
    if (n == 0)
        return "zero";
    if (n == 1)
        return "one";
    if (n == 2)
        return "two";
    if (n == 3)
        return "three";
    if (n == 4)
        return "four";
    if (n == 5)
        return "five";
    if (n == 6)
        return "six";
    if (n == 7)
        return "seven";
    if (n == 8)
        return "eight";
    if (n == 9)
        return "nine";
}