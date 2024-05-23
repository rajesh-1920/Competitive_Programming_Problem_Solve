#include<iostream>
#include<string>
using namespace std;
void solve();
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
void solve()
{
    int n,i;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            s[i]='D';
        }
        else if(s[i]=='D')
        {
            s[i]='U';
        }
    }
    cout<<s<<endl;
}
