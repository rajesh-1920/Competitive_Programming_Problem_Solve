// Author:  Rajesh Biswas
// Date  :  19.11.2023

#include <bits/stdc++.h>
#define fr first
#define sc second
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll sum = 0, i, j, a[5][5], mx, s[] = {0, 1, 2, 3, 4};
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            cin >> a[i][j];
    }
    sum = a[s[1]][s[2]] + a[s[2]][s[1]] + a[s[0]][s[4]] + a[s[4]][s[0]];
    sum += a[s[0]][s[2]] + a[s[2]][s[0]] + a[s[4]][s[3]] + a[s[3]][s[4]];
    sum += a[s[0]][s[4]] + a[s[4]][s[0]] + a[s[4]][s[3]] + a[s[3]][s[4]];
    mx = sum;
    while (next_permutation(s, s + 5))
    {
        sum = a[s[1]][s[2]] + a[s[2]][s[1]] + a[s[0]][s[4]] + a[s[4]][s[0]];
        sum += a[s[0]][s[2]] + a[s[2]][s[0]] + a[s[4]][s[3]] + a[s[3]][s[4]];
        sum += a[s[0]][s[4]] + a[s[4]][s[0]] + a[s[4]][s[3]] + a[s[3]][s[4]];
        mx = max(mx, sum);
    }
    cout << mx;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    // cin>>test;
    while (test--)
        solve();
    return 0;
}
