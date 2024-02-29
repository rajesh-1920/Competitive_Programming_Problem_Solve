//Author : Rajesh Biswas
//Date : 17.08.2023
//Problem : Three Pairwise Maximums
//Rating :
//Contest : Div.3

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
    ll x,y,z;
    cin>>x>>y>>z;
    if(x==y&&z<=x)
        cout<<"YES\n"<<x<<" "<<z<<" "<<z<<endl;
    else if(x==z&&y<=x)
        cout<<"YES\n"<<x<<" "<<y<<" "<<y<<endl;
    else if(z==y&&x<=z)
        cout<<"YES\n"<<y<<" "<<x<<" "<<x<<endl;
    else
        cout<<"NO"<<endl;
}
