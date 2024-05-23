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
    ll n,m,i;
    cin>>n>>m;
    ll a[n],b[m],suma,sumb;
    suma=sumb=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        suma+=a[i];
    }
    for(i=0; i<m; i++)
    {
        cin>>b[i];
        sumb+=b[i];
    }
    if(suma==sumb)
        cout<<"Draw"<<endl;
    else if(suma>sumb)
        cout<<"Tsondu"<<endl;
    else
        cout<<"Tenzing"<<endl;
}
