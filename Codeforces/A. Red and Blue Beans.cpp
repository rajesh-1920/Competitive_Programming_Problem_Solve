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
    ll r,d,b,div;
    cin>>r>>b>>d;
    if(d==0)
    {
        if(r==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    {
        if(b>r)
        {
            b=b+r;
            r=b-r;
            b=b-r;
        }
        div=r/b;
        if(r%b>0)
            div++;
        if(div-1<=d)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
