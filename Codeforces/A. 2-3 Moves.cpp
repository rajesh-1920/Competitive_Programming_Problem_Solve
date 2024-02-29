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
    long int n,res;
    cin>>n;
    res=n/3;
    if(n%3!=0)
    {
        if(((n-4)%3)==0&&n!=1)
        {
            res=2+((n-4)/3);
        }
        else
        {
            n=n%3;
            if(n==1)
            {
                res=res+2;
            }
            else
            {
                res++;
            }
        }
    }
    cout<<res<<endl;
}

