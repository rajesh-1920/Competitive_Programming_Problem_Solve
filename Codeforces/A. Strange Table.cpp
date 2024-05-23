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
    long long int n,m,x,res,row,col;
    cin>>n>>m>>x;
    col=x/n;
    row=x%n;
    if(x%n!=0)
    {
        col++;
    }
    else
    {
        row=n;
    }
    res=col+((row-1)*m);
    cout<<res<<endl;
}
