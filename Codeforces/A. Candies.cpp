//Rajesh Biswas
//Date: 07.08.2023

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
    ll n,i,s=1;
    cin>>n;

    for(i=2; i<=n; i=i*2)
    {
        s=s+i;
        if(n%s==0)
        {
            cout<<n/s<<endl;
            break;
        }
    }
}
