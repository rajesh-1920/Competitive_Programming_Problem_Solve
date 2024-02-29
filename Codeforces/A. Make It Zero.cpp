//Author : Rajesh Biswas
//Date : 11.09.2023

#include<bits/stdc++.h>
using namespace std;
void solve(void);
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin>>test;
    while(test--)
        solve();
}
void solve(void)
{
    int n,i,x,sum=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(i==0)
            x=a[i];
        else
            x=x^a[i];
    }
    if(sum==0)
    {
        cout<<0<<"\n";
        return;
    }
    if(x==0)
    {
        cout<<1<<"\n"<<1<<" "<<n<<"\n";
        return;
    }

}
