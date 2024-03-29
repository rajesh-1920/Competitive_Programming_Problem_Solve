// Author:  Rajesh Biswas
// Date  :  04.10.2023

#include <bits/stdc++.h>
#define fi first
#define sc second
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n;
    cin >> n;
    vector<string> v = {""}, temp;
    while (n--)
    {
        temp.clear();
        for (auto it : v)
            temp.push_back("0" + it);
        reverse(v.begin(), v.end());
        for (auto it : v)
            temp.push_back("1" + it);
        v = temp;
    }
    for (auto it : v)
        cout << it << '\n';
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
