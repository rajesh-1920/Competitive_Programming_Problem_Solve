//Author:  Rajesh Biswas
//Date  :  26.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll n,f1=1,f2=3,i,cnt=2;
    cin>>n;
    cout<<f1<<" "<<f2<<" ";
    for(i=4;; i++)
    {
        if(cnt==n)
            break;
        if((3*i)%(f1+f2)!=0)
        {
            f1=f2;
            f2=i;
            cout<<i<<" ";
            cnt++;
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
