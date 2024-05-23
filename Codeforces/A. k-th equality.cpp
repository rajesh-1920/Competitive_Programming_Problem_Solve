#include<iostream>
using namespace std;

int power(int n);
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
    long long int A,B,C,a,b,c,k,count=0,i,j,check;
    cin>>A>>B>>C>>k;
    a=power(A);
    b=power(B);
    c=power(C);
    //cout<<a/10<<" "<<b/10<<" "<<c/10;
    check=1;
    j=b/10;
    if((a-a/10)*(b-b/10)<k)
    {
        {
            cout<<"-1"<<endl;
        }
    }
    else
    {
        for(i=a/10; (i<a); i++)
        {
            for(j=b/10; (j<b)&&(i+j<c); j++)
            {
                if(i+j>=c/10)
                {
                    count++;
                    if(count==k)
                    {
                        cout<<i<<" + "<<j<<" = "<<i+j<<endl;
                        check=0;
                        break;
                    }
                }
            }
            if(check==0)
            {
                break;
            }
        }
        if(check==1)
        {
            cout<<"-1"<<endl;
        }
    }
}

int power(int n)
{
    int i,r=1;
    for(i=0; i<n; i++)
    {
        r=r*10;
    }
    return r;
}
