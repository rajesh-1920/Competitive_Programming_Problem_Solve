// Author : Rajesh Biswas
// Date : 04.11.2023
// Problem : Interesting drink
// Rating : 1100
// Contest : Div.2

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long int ll;
int main(void)
{
    ll n, q, m, j;
    vector<ll> x;
    vector<ll>::iterator it;
    cin >> n;
    while (n--)
    {
        cin >> j;
        x.push_back(j);
    }
    sort(x.begin(), x.end());
    cin >> q;
    while (q--)
    {
        cin >> m;
        it = upper_bound(x.begin(), x.end(), m);
        cout << it - x.begin() << endl;
    }
}
