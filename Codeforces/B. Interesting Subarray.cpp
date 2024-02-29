// Author : Rajesh Biswas
// Date : 03.09.2023
// Problem : A - Interesting Subarray
// Contest : good_bye

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void);
int main(void)
{
    ll test;
    cin >> test;
    while (test--)
        solve();
}
void solve(void)
{
    ll n,i,x,flag=1;
    vector<ll>vec;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin>>x;
        vec.push_back(x);
        if(flag==1&&i>0)
        {
            if((abs(vec[i]-vec[i-1]))>=2)
            {
                cout<<"YES\n";
                cout<<i<<" "<<i+1<<"\n";
                flag=0;
            }
        }
    }
    if(flag==1)
        cout<<"NO\n";
}
