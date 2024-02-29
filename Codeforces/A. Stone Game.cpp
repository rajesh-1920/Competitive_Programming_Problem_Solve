#include<iostream>
using namespace std;
int main(void)
{
    int i,t,n,k,j,pl,pm,r,temp;
    cin>>t;
    for(k=0; k<t; k++)
    {
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                pl=i+1;
            }
            if(a[i]==n)
            {
                pm=i+1;
            }
        }
        if(pl>pm)
        {
            temp=pl;
            pl=pm;
            pm=temp;
        }
        r=pl+n-pm+1;
        if(r>pm)
        {
            r=pm;
        }
        if(r>(n-pl+1))
        {
            r=n-pl+1;
        }
        cout<<r<<endl;
    }
}
