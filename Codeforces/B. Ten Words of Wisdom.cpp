#include<iostream>
#include<algorithm>
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
    int n,i,res=1,quality=-1;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]<=10)
        {
            if(b[i]>quality)
            {
                res=i+1;
                quality=b[i];
            }
        }
    }
    cout<<res<<endl;
}
