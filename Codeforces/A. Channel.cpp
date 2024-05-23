// Author : Rajesh Biswas
//  Date : 30.08.2023
//  Problem : A. Channel
//  Contest : div1+div2

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void);
int main(void)
{
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
}
void solve(void)
{
    ll n, a, q, i, cp = 0, f = 0, p = 0, t = 0,cm=0;
    string s;
    cin >> n >> a >> q >> s;
    if (a >= n)
        cout << "YES" << endl;
    else
    {
        for (i = 0; i < q; i++)
        {
            if (s[i] == '-')
                {cm++;cp--;}
            else if (s[i] == '+')
            {
                cp++;
                p++;
            }
            if (a + cp > n)
            {
                cout << "YES" << endl;
                t = 1;
            }
        }
        if (t == 0)
        {
            if (p + a == n)
                cout << "MAYBE" << endl;
            else if(p+a<n)
                cout << "NO" << endl;
                else if(p+a-cm==n)
                cout << "MAYBE"<< endl;
            else
                cout << "YES" << endl;
        }
    }
}
