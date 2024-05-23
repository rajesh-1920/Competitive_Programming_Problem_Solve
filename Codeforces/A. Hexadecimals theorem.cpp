//Author:  Rajesh Biswas
//Date  :  19.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n;
    vector<ll> vec;
    cin>>n;
    vec.push_back(0);
    vec.push_back(1);
    for(ll i=0; 1; i++)
    {
        ll fib=vec[i]+vec[i+1];
        vec.push_back(fib);
        for(ll j=0; j<=i+2; j++)
        {
            for(ll k=0; k<=i+2; k++)
            {
                if(vec[i]+vec[j]+vec[k]==n)
                {
                    cout<<vec[i]<<" "<<vec[j]<<" "<<vec[k]<<"\n";
                    return;
                }
                if(vec[k]>n)
                {
                    cout<<"I'm too stupid to solve this problem\n";
                    return;
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
        solve();
    return 0;
}
