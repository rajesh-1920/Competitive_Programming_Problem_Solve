#include<iostream>
using namespace std;
int main(void)
{
    long long int n,t,i,j,k,c;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        int a[n];
        for(j=0; j<n; j++)
        {
            cin>>a[j];
        }
        c=0;
        for(j=0; j<n; j++)
        {
            for(k=j+1; k<n; k++)
            {
                if(a[j]==a[k])
                {
                    c++;
                    break;
                }
            }
        }
        if(c==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
