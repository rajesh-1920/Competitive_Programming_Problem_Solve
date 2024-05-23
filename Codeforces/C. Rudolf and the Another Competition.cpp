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
    long int n,m,h,i,j,sum,res;
    cin>>n>>m>>h;
    long int sol[n],penal[n],rrr[n][m],k,tt,sumi,sum0;
    res=1;
    for(i=0; i<n; i++)
    {
        long int t[m];
        for(j=0; j<m; j++)
        {
            cin>>t[j];
        }
        sort(t,t+m);
        for(j=0; j<m; j++)
        {
            rrr[i][j]=t[j];
        }
        sol[i]=penal[i]=sum=0;
        for(j=0; j<m; j++)
        {
            sum+=t[j];
            if(sum>h)
                break;
            sol[i]=j+1;
            penal[i]+=t[j];
        }
        if(sol[0]<sol[i])
            res++;
        else if(sol[0]==sol[i])
        {
            if(penal[0]>penal[i])
                res++;
            else if(penal[0]==penal[i]&&i>0)
            {
                k=tt=sumi=sum0=0;
                while(k<m)
                {
                    sumi+=rrr[i][k];
                    sum0+=rrr[i][k];
                    if(sumi>sum0)
                        break;
                    if(rrr[0][k]>rrr[i][k]&&sumi==sum0)
                    {
                        tt=1;
                        break;
                    }
                    k++;
                }
                if(tt==1)
                    res++;
            }
        }
    }
    cout<<res<<endl;
}
