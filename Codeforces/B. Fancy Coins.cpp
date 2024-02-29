//Author : Rajesh Biswas
//Date : 17.08.2023
//Problem : Fancy Coins
//Rating :
//Contest : Div.2

#include<iostream>
using namespace std;
typedef long long int ll;
void sol(void);
int main(void)
{
    ll test;
    cin>>test;
    while(test--)
        sol();
}
void sol(void)
{
    ll m,k,a1,ak,res,r1;
    cin>>m>>k>>a1>>ak;
    m=m-a1;
    if(m<=0)
        cout<<0<<endl;
    else
    {
        res=m/k+m%k;

        cout<<res<<endl;
    }
}
