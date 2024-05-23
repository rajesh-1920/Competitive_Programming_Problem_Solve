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
    int a[2],b[2],f[2],res,r1,r2;

    cin>>a[0]>>a[1]>>b[0]>>b[1]>>f[0]>>f[1];

    if(a[0]==b[0])
    {
        if(a[0]==f[0]&&((a[1]>=f[1]&&f[1]>=b[1])||(a[1]<=f[1]&&f[1]<=b[1])))
        {
            res=a[1]-b[1];
            if(res<0)
            {
                res=-res;
            }
            res=res+2;
        }
        else
        {
            res=a[1]-b[1];
            if(res<0)
            {
                res=-res;
            }
        }
    }

    else if(a[1]==b[1])
    {
        if(a[1]==f[1]&&((a[0]>=f[0]&&f[0]>=b[0])||(a[0]<=f[0]&&f[0]<=b[0])))
        {
            res=a[0]-b[0];
            if(res<0)
            {
                res=-res;
            }
            res=res+2;
        }
        else
        {
            res=a[0]-b[0];
            if(res<0)
            {
                res=-res;
            }
        }
    }

    else
    {
        r1=a[0]-b[0];
        r2=a[1]-b[1];
        if(r1<0)
        {
            r1=-r1;
        }
        if(r2<0)
        {
            r2=-r2;
        }
        res=r1+r2;
    }
    cout<<res<<endl;
}
