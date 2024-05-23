#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
#define ll long long int

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
    int l;
    char s[100];
    cin>>s;
    l=strlen(s);
    sort(s,s+l);
    cout<<s<<endl;
}
