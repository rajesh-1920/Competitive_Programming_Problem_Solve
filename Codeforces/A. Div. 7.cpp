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
    int n,res,r1,r2,i,m,d,d1;
    cin>>n;
    if(n%7==0)
    {
        res=n;
    }
    else
    {
        m=n;
        d=(n/10)%10;
        while(1)
        {
            m++;
            if(m%7==0&&m%10!=0)
            {
                r1=m;
                break;
            }
        }
        while(1)
        {
            n--;
            if(n%7==0&&n%10!=0)
            {
                r2=n;
                break;
            }
        }
        d1=(r1/10)%10;
        if(d1==d)
        {
            res=r1;
        }
        else
        {
            res=r2;
        }

    }
    cout<<res<<endl;
}
