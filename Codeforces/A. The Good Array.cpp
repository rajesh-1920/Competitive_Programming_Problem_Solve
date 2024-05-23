// Author:  Rajesh Biswas
// Date  :  27.11.2023

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-------------------------------------
#define ll long long int
#define nl cout << "\n"
//------------------------------------------------------------------------------------
void solve(void)
{
    ll n, k, cnt = 2;
    cin >> n >> k;
    n -= 2;
    cnt += (n / k);
    cout << cnt;
    nl;
}
//------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
