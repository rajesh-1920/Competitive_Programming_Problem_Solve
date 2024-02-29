#include<iostream>
using namespace std;
void solve(void);
int main(void)
{
    long long int test;
    cin>>test;
    while(test--)
        solve();
}
void solve(void)
{
    int n,i;
    cin>>n;
    long long int a[n],sum=0,res;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    res=sum/n;
    if(sum%n!=0)
        res++;
    cout<<res<<endl;
}
