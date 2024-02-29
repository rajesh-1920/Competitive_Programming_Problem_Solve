//Author:  Rajesh Biswas
//Date  :  29.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll q,i,fl=1,f=1;
    vector<ll> a;
    vector<ll>::iterator it;
    cin>>q;
    for(i=0; i<q; i++)
    {
        ll x;
        cin>>x;
        if(i==0)
        {
            a.push_back(x);
            cout<<1;
        }
        else
        {
            it=--a.end();
            if((*it)>x)
                fl=0;
            if(fl==0)
            {
                if(f==1&&(*it)<=x)
                {
                    a.push_back(x);
                    cout<<1;
                    continue;
                }
                if(f==1&&x<=a[0])
                {
                    a.push_back(x);
                    cout<<1;
                    f=0;
                    continue;
                }
                else if(f==0)
                {
                    if(x<=a[0]&&(*it)<=x)
                    {
                        a.push_back(x);
                        cout<<1;
                        continue;
                    }
                }
                cout<<0;
            }
            else
            {
                a.push_back(x);
                cout<<1;
                continue;
            }
        }
    }
    cout<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
        solve();
    return 0;
}
