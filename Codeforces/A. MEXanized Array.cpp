//Rajesh Biswas

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(void)
{
    ll n,k,x,i,sum=0;
    cin>>n>>k>>x;
    if(n<k||k>x+1)
    {
        cout<<-1<<"\n";
        return;
    }
    for(i=0; i<k ; i++)
        sum+=i;
    if(x==k)
        x--;
    cout<<sum+((n-i)*x)<<"\n";
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
