#include<iostream>
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
    long int i,m,n,x;
    cin>>x>>n>>m;
    if(m*10>=x)
    {
        x=0;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            x=(x/2)+10;
            if(x<=10)
            {
                break;
            }
        }
        for(i=0; i<m; i++)
        {
            if(x<=0)
            {
                break;
            }
            x=x-10;
        }
    }
    if(x<=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}


