#include<iostream>
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
    long long int n,i,total=0,ex_candy,res=0;
    cin>>n;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        total=total+a[i];
    }
    if((total%n)==0)
    {
        ex_candy=total/n;
        for(i=0; i<n; i++)
        {
            if(a[i]>ex_candy)
            {
                res++;
            }
        }
    }
    else
    {
        res=-1;
    }
    cout<<res<<endl;
}

