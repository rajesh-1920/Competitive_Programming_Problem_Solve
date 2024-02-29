//Author : Rajesh Biswas
//Date : 17.08.2023
//Problem : Most Unstable Array
//Rating : 800
//Contest : Div.3

#include<iostream>
using namespace std;
typedef long long int ll;
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
    ll n,m;
    cin>>n>>m;
    if(n==1)
        cout<<0<<endl;
    else if(n==2)
        cout<<m<<endl;
    else
        cout<<m*2<<endl;
}

