#include<iostream>
#include<algorithm>
using namespace std;
void solve();
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
void solve()
{
    int n,res=0,j;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(n==1)
    {
        res=0;
    }
    else if(n==2)
    {
        res=a[1]-a[0];
    }
    else if(n==3)
    {
        res=a[n-1]-a[0];
    }
    else
    {
        for(i=0,j=n-1;i<j;i++,j--)
        {
            res=res+a[j]-a[i];
        }
    }
    cout<<res<<endl;
}
