//Author : Rajesh Biswas
//Date : 17.08.2023
//Problem : LCM Problem
//Rating : 800
//Contest : Div.2

#include<iostream>
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
    ll l,r;
    cin>>l>>r;
    if(r>=2*l)
        cout<<l<<" "<<2*l<<endl;
    else
            cout<<-1<<" "<<-1<<endl;
}
