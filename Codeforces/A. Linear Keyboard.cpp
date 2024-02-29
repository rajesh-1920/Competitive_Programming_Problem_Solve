#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
    int i,j,k,l,t,sum,h,h1,h2;
    cin>>t;
    for(i=0; i<t; i++)
    {
        char ms[27],s[51];
        cin>>ms>>s;
        l=strlen(s);
        sum=0;
        for(k=0; k<26; k++)
        {
            if(ms[k]==s[0])
            {
                h1=k+1;
                break;
            }
        }
        for(j=1; j<l; j++)
        {
            for(k=0; k<26; k++)
            {
                if(ms[k]==s[j])
                {
                    h2=k+1;
                    break;
                }
            }
            h=h1-h2;
            h1=h2;
            if(h<0)
            {
                h*=(-1);
            }
            sum=sum+h;
        }
        cout<<sum<<endl;
    }
}
