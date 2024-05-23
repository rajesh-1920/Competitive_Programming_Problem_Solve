#include<iostream>
using namespace std;
void solve();

int main(void)
{
    long int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}

void solve()
{
    long long int i,n,max=0,se_max=0,max_count=0;
    cin>>n;
    long long int s[n];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
        if(max<s[i])
        {
            max=s[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(max>s[i]&&s[i]>se_max)
        {
            se_max=s[i];
        }
        if(max==s[i])
        {
            max_count++;
        }
    }
    if(se_max==0||max_count>1)
    {
        se_max=max;
    }
    for(i=0; i<n; i++)
    {
        if(s[i]==max)
        {
            cout<<max-se_max<<" ";
        }
        else
        {
            cout<<s[i]-max<<" ";
        }
    }
    cout<<endl;
}
