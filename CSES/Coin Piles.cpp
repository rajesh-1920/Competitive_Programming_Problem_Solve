//Author:  Rajesh Biswas
//Date  :  02.10.2023

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(void)
{
    ll a,b;
    cin>>a>>b;
    if(a>b)
        swap(a,b);
    if(a*2>=b&&(a+b)%3==0)
    {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test=1;
    cin>>test;
    while(test--)
        solve();
    return 0;
}
