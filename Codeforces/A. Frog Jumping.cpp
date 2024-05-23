#include<iostream>
using namespace std;
#define ll long long int

void solve(void);
int main(void)
{
    ll test;
    cin>>test;
    while(test--)
        solve();
}
void solve(void)
{
    ll a,b,k,res;
    cin>>a>>b>>k;
    k=k/2;
    b*=k;
    if(k%2!=0)
        k=k+1;
    a*=k;
    res=a-b;
    if(res<0)
        res++;
    cout<<res<<endl;
}
