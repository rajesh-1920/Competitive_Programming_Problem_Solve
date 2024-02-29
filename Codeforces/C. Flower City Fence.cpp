//Author : Rajesh Biswas
//Date : 24.08.2023
//Problem : C. Flower City Fence
//Ratings :
//Contest : Div.3

#include<iostream>
#include<algorithm>
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
    ll n,i,j,flag=1,max=0;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(max<a[i])
            max=a[i];
    }
    ll t[max][max],rt[max][max];
    for(i=0; i<n; i++)
    {
        for(j=0; j<a[i]; j++)
            t[i][j]=1;
    }
    for(i=0; i<max; i++)
    {
        for(j=0; j<max; j++)
            rt[j][i]=t[i][j];
    }
    for(i=0; i<max; i++)
    {
        for(j=0; j<max; j++)
        {
            if(t[i][j]!=rt[i][j])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            break;
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
