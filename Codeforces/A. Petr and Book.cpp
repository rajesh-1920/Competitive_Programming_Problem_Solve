//Author : Rajesh Biswas
//Date : 13.09.2023

#include<bits/stdc++.h>
using namespace std;
void solve(void);
int main(void)
{
    int test=1;
    while(test--)
        solve();
}
void solve(void)
{
    int n,i;
    vector<pair<int,int> >d;
    cin>>n;
    for(i=1; i<=7; i++)
    {
        int x;
        cin>>x;
        d.push_back({x,i});
    }
    while(1)
    {
        for(i=0; i<7; i++)
        {
            n-=d[i].first;
            if(n<=0)
            {
                cout<<d[i].second<<"\n";
                return;
            }
        }
    }
}
