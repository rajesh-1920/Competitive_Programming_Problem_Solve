//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,i,t,cnt;
    cin>>n;
    ll s=n*(n+1)/2;
    if(s%2!=0)
        cout<<"NO\n";
    else
    {
        if(n%2!=0)
        {
            t=n/2;
            i=1;
            cout<<"YES\n"<<t<<"\n";
            cout<<n<<" ";
            for(cnt=1; cnt<t; cnt+=2)
            {
                cout<<i<<" "<<n-i<<" ";
                i++;
            }
            cout<<"\n";
            t++;
            cout<<t<<"\n";
            for(cnt; cnt<n; cnt+=2)
            {
                cout<<i<<" "<<n-i<<" ";
                i++;
            }
            cout<<"\n";
        }
        else
        {
            t=n/2;
            i=1;
            cout<<"YES\n"<<t<<"\n";
            cout<<n<<" "<<n/4<<" ";
            for(cnt=1; cnt<t-1; cnt+=2)
            {
                cout<<i<<" "<<n-i<<" ";
                i++;
            }
            cout<<"\n";
            cout<<t<<"\n";
            cout<<n-i<<" "<<n/2<<" ";
            i++;
            for(cnt; cnt<n-4; cnt+=2)
            {
                cout<<i<<" "<<n-i<<" ";
                i++;
            }
            cout<<"\n";
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
