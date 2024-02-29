#include<iostream>
using namespace std;
void solve();
int main(void)
{
    long long int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
void solve()
{
    long long int a,b,c,x,y,nx,ny;
    cin>>a>>b>>c>>x>>y;
    nx=x-a;
    ny=y-b;
    if(nx<0)
    {
        nx=0;
    }
    if(ny<0)
    {
        ny=0;
    }
    if(nx+ny<=c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
