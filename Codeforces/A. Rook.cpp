//problem : A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    char c, d;
    string s;
    cin >> s;
    for (c = (char)(s[0] - 1); c >= 'a'; c--)
        cout << c << s[1] << '\n';
    for (c = (char)(s[0] + 1); c <= 'h'; c++)
        cout << c << s[1] << '\n';
    for (c = (char)(s[1] - 1); c >= '1'; c--)
        cout << s[0] << c << '\n';
    for (c = (char)(s[1] + 1); c <= '8'; c++)
        cout << s[0] << c << '\n';
}
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