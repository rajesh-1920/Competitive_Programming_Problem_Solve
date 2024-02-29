#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
    int t,i,j,l,b,ac;
    char s[110];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;
        l=strlen(s);
        b=ac=0;
        for(j=0;j<l;j++)
        {
            if(s[j]=='A'||s[j]=='C')
            {
                ac++;
            }
            else
            {
                b++;
            }
        }
        if(ac==b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
