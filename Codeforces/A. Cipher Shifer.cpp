#include<iostream>
using namespace std;
int main(void)
{
    int t,k,i,j,n,l,c;
    cin>>t;
    for(k=0; k<t; k++)
    {
        cin>>n;
        char s[n+1],temp;
        cin>>s;
        for(l=0; s[l]!='\0'; l++)
        {
            temp=s[l];
            for(i=l+1; s[i]!='\0'; i++)
            {
                if(temp==s[i])
                {
                    c=1;
                    for(j=l+1;j<n;j++)
                    {
                        s[j]=s[i+c];
                        c++;
                    }
                    s[j]='\0';
                    break;
                }
            }
        }
        s[j]='\0';
        cout<<s<<endl;
    }
}
