// Author:  Rajesh Biswas
// Date  :  30.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
//------------------------------------------------------------------------------------
void solve(void)
{
    ll a, b, n, cnt = 0, i;
    cin >> a >> b >> n;
    if (a > b)
        swap(a, b);
    for (i = 0; i <= a; i++)
    {
        if (i > n)
            break;
        if (n - i <= b)
            cnt++;
    }
    cout << cnt;
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1, T;
    // cin >> test;
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