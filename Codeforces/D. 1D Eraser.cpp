//Author:  Rajesh Biswas
//Date  :  21.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,k,i,j,count=0;
    cin>>n>>k;
    string s;
    cin>>s;
    ll t1=0;
    for(i=0; i<n;)
    {
        if(s[i]=='B')
        {
            count++;
            t1=1;
        }
        if(t1==1)
        {
            t1=0;
            i+=k;
        }
        else
            i++;
    }
    cout<<count<<"\n";
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
