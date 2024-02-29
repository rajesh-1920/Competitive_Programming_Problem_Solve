#include<iostream>
using namespace std;
void solve(void);
int main(void)
{
    int test;
    cin>>test;
    while(test--)
        solve();
}
void solve(void)
{
    int n,i,res;
    cin>>n;
    int a[n],b[n];
    res=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]>b[i])
            res++;
    }
    cout<<res<<endl;
}
