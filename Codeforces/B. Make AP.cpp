#include<iostream>
#include<math.h>
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
    long long int a,b,c,res=0,dif_ba,dif_bc,dif_ac,cp,ap;
    cin>>a>>b>>c;
    if((a-b)==(b-c))
    {
        res=1;
    }
    else
    {
        dif_ba=b-a;
        cp=b+dif_ba;
        if(cp%c==0&&((a-b)==(b-cp))&&cp>0)
        {
            res=1;
        }
        dif_bc=b-c;
        ap=b+dif_bc;
        if(ap%a==0&&((ap-b)==(b-c))&&ap>0)
        {
            res=1;
        }
        if(a>c)
        {
            dif_ac=(a-c)/2;
            if(((c+dif_ac)%b==0)&&((dif_ac)==(a-dif_ac-c))&&((c+dif_ac)>0))
            {
                res=1;
            }
        }
        else
        {
            dif_ac=(c-a)/2;
            if(((a+dif_ac)%b==0)&&(dif_ac)==(c-dif_ac-a)&&(a+dif_ac)>0)
            {
                res=1;
            }
        }
    }
    if(res==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
