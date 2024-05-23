//Rajesh Biswas;
//date:08.03.2023

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
    ll i,n,x,y,r,c,res;
    cin>>n>>x>>y>>r>>c;
    if(x!=r&&y!=c)
        res=2;
    else if(x!=r||y!=c)
        res=1;
    else
        res=0;
    cout<<res<<endl;
}
