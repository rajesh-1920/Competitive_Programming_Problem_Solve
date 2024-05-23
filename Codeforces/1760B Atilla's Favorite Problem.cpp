#include<iostream>
using namespace std;
int main(void)
{
    int t,i,n,r,j,k;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        char s[n+1],temp;
        cin>>s;
        for(j=0; j<n; j++)
        {
            for(k=0; k<n-1; k++)
            {
                if(s[k]<s[k+1])
                {
                    temp=s[k];
                    s[k]=s[k+1];
                    s[k+1]=temp;
                }
            }
        }
        r=s[0]-'a'+1;
        cout<<r<<endl;
    }
}
