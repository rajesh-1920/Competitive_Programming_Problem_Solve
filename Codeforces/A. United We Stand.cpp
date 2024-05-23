//Author : Rajesh Biswas
//Date : 13.08.2023
//Problem : United We Stand
//Rating :
//Contest : Div.2

#include<iostream>
#include<algorithm>
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
    ll n,i,count=0;
    cin>>n;
    ll a[n],b[n-1],c[n-1];
    for(i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);
    c[count]=a[n-1];
    count++;
    for(i=n-2; i>=0; i--)
    {
        if(a[i]%a[n-1]==0)
        {
            c[count]=a[i];
            count++;
        }
    }
    if(count==n)
        cout<<-1<<endl;
    else
    {
        cout<<n-count<<" "<<count<<endl;
        for(i=0; i<n; i++)
        {
            if(a[i]==c[0])
                continue;
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(i=0; i<count; i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}
