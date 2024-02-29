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
    int i,n,count=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }
    }
    if(((n-count)%2)==0)
    {
        cout<<count<<endl;
    }
    else
    {
        cout<<count-1<<endl;
    }
}
