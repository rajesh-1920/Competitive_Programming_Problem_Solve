// Author:  Rajesh Biswas
// Date  :  04.11.2023

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool cheack(string &s, ll l1)
{
    ll sum1 = 0, sum2 = 0, i;
    for (i = 0; i < l1 / 2; i++)
    {
        sum1 += s[i] - '0';
        sum2 += s[i + (l1 / 2)] - '0';
    }
    return (sum1 == sum2);
} 
void solve(void)
{
    ll n, i, j, l1, l2, cnt = 0;
    cin >> n;
    string s[n], s1;
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
        for (j = 0; j < i; j++)
        {
            s1 = s[i] + s[j];
            l1 = s1.length();
            if (l1 % 2 == 0)
            {
                if (cheack(s1, l1))
                    cnt++;
            }
            s1 = s[j] + s[i];
            l1 = s1.length();
            if (l1 % 2 == 0)
            {
                if (cheack(s1, l1))
                    cnt++;
            }
        }
        cnt++;
    }
    cout << cnt << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}