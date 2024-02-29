//Author:  Rajesh Biswas
//Date  :  29.09.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll t,sx,sy,ex,ey,i;
    string s;
    cin>>t>>sx>>sy>>ex>>ey>>s;
    for(i=0; i<t; i++)
    {
        if(s[i]=='E')
        {
            if(sx>=ex)
                continue;
            sx++;
        }
        if(s[i]=='W')
        {
            if(sx<=ex)
                continue;
            sx--;
        }
        if(s[i]=='N')
        {
            if(sy>=ey)
                continue;
            sy++;
        }
        if(s[i]=='S')
        {
            if(sy<=ey)
                continue;
            sy--;
        }
        if(ex==sx&&ey==sy)
        {
            cout<<i+1<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";
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
