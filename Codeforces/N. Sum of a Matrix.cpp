//Author:  Rajesh Biswas
//Date  :  04.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void sum(int r,int c,int a[100][100],int b[100][100])
{
    if(r==0)
    {
        for(int i=0; i<=c; i++)
            cout<<a[r][i]+b[r][i]<<" ";
        cout<<'\n';
        return;
    }
    sum(r-1,c,a,b);
    for(int i=0; i<=c; i++)
        cout<<a[r][i]+b[r][i]<<" ";
    cout<<'\n';
}
void solve(void)
{
    int r,c;
    cin>>r>>c;
    int a[100][100],b[100][100];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            cin>>a[i][j];
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            cin>>b[i][j];
    }
    sum(r-1,c-1,a,b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test=1;
    //cin>>test;
    while(test--)
        solve();
    return 0;
}
