#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
    char s1[]="qwertyuiop",s2[]="asdfghjkl",s3[]="zxcvbnm",s[100],ch,r[110];
    cin>>ch>>s;
    int i,j,l,k=0;
    l=strlen(s);
    strlwr(s);
    if(ch=='R')
    {
        for(i=0; i<l; i++)
        {
            for(j=0; j<10; j++)
            {
                if(s[i]==s1[j])
                {
                    r[k]=s1[j-1];
                    k++;
                    break;
                }
                if(s[i]==s2[j])
                {
                    r[k]=s2[j-1];
                    k++;
                    break;
                }
                if(s[i]==s3[j])
                {
                    r[k]=s3[j-1];
                    k++;
                    break;
                }
            }
        }
    }
    else if(ch=='L')
    {
        for(i=0; i<l; i++)
        {
            for(j=0; j<10; j++)
            {
                if(s[i]==s1[j])
                {
                    r[k]=s1[j+1];
                    k++;
                    break;
                }
                if(s[i]==s2[j])
                {
                    r[k]=s2[j+1];
                    k++;
                    break;
                }
                if(s[i]==s3[j])
                {
                    r[k]=s3[j+1];
                    k++;
                    break;
                }
            }
        }
    }
    r[l]='\0';
    cout<<r<<endl;
}
