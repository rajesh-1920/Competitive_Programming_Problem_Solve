// Author : Rajesh Biswas
// Date : 03.09.2023
// Problem : Books Exchange (easy version)
// Contest : Post Exam Marathon Contest by CSE-CLUB, PSTU

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void);
int main(void)
{
    ll test;
    cin >> test;
    while (test--)
        solve();
}
void solve(void)
{
    ll n,i,x,count;
    vector<pair<ll,ll> > pvec,vec,temp;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin>>x;
        pvec.push_back({x,1});
        vec.push_back({x,1});
        temp.push_back({x,i+1});
    }
   sort(temp.begin(),temp.end());
    for (i = 0; i < n; i++)
    {
        swap(temp[i].first,temp[i].second);
        vec[i].first=temp[i].first;
    }
    while(1)
    {
        count=0;
        for (i = 0; i < n; i++)
        {
            if(vec[i].first!=i+1)
            {
                temp[pvec[i].first-1].first=vec[i].first;
                pvec[i].second++;
            }
            else
                count++;
        }
        if(count==n)
            break;
        for (i = 0; i < n; i++)
            vec[i]=temp[i];
    }
    for (i = 0; i < n; i++)
        cout<<pvec[i].second<<" ";
    cout<<"\n";
}
