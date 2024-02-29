//Author : Rajesh Biswas
//Date : 11.08.2023
//Problem : Even Array

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
    int n,i,e_od=0,e_ev=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i%2==0&&a[i]%2!=0)
            e_ev++;
        if(i%2!=0&&a[i]%2==0)
            e_od++;
    }
    if(e_od==e_ev)
        cout<<e_od<<endl;
    else
        cout<<(-1)<<endl;
}
