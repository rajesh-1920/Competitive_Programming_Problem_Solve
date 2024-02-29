//Author:  Rajesh Biswas
//Date  :  24.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-------------------------------------
#define pr pair<ll,ll>
#define vt vector<ll>
#define vtp vector<pr>
#define pb push_back

#define rsrt(X) sort(X.rbegin(), X.rend())
#define srt(X) sort(X.begin(), X.end())
#define fs first
#define sc second

#define no cout<<"No\n"
#define yes cout<<"Yes\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
//---------------------------------------------------------------------------------------
void solve(void)
{
    ll n,m,i;
    vt a;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        ll x;
        cin>>x;
        a.pb(x);
    }
    srt(a);
    ll mx=0,mn=0,cnt=0;
    for(i=0; i<m; i++)
    {
        if(cnt+a[i]>n)
        {
            for(ll j=a[i]; j>=1; j--)
            {
                if(cnt==n)
                    break;
                cnt++;
                mn+=j;
            }
        }
        else if(cnt==n)
            break;
        else
        {
            cnt+=a[i];
            mn+=((a[i]*(a[i]+1))/2);
        }
    }
    cnt=0;
    while(n>cnt)
    {
        rsrt(a);
        mx+=a[0];
        a[0]--;
        cnt++;
    }
    cout<<mx<<" "<<mn<<"\n";
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
