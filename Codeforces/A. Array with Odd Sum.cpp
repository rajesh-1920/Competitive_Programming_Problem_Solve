//Author : Rajesh Biswas
//Date : 15.08.2023
//Problem : Array with Odd Sum
//Rating : 800
//Contest : Div.3 (Round 617)

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
    int n,i,eve=0,odd=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
            odd++;
        else
            eve++;
    }
    if(n%2==0)
    {
        if(odd>0&&odd<n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    {
        if(odd>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
