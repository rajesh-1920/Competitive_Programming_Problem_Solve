#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
void solve();

int main(void)
{
    long long int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}

void solve()
{
    long long int n,k;
    cin>>n;
    while(1)
    {
        if((n&(n-1))==0)
        {
            k=n-1;
            break;
        }
        n=n&(n-1);
    }
    cout<<k<<endl;
}

