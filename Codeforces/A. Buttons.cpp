//Author : Rajesh Biswas
//Date : 16.08.2023
//Problem : Buttons
//Contest : Div.2 (Round 893)

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
    ll a,b,c;
    cin>>a>>b>>c;
    if(c%2==0)
    {
        if(a<=b)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }
    else
    {
        a++;
        if(a<=b)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }
}
