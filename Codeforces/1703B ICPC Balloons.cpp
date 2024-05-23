#include<iostream>
using namespace std;
int main(void)
{
    long long int n,t,i,j,k,c;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        c=1;
        char s[n+1],temp;
        cin>>s;
        for(j=0; j<n; j++)
        {
            for(k=0; k<n-1; k++)
            {
                if(s[k]>s[k+1])
                {
                    temp=s[k];
                    s[k]=s[k+1];
                    s[k+1]=temp;
                }
            }
        }
        for(j=0; j<n-1; j++)
        {
            if(s[j]!=s[j+1])
                {
                    c++;
                }
        }
        cout<<c*2+(n-c)<<endl;
    }
}
