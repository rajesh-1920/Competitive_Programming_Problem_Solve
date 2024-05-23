#include<iostream>
using namespace std;
int main(void)
{
    int i,t,n,a,b,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>a>>b;
        char s[n];
        for(j=0;j<b;j++)
        {
            s[j]='a'+j;
        }
        for(j=b;j<n;j++)
        {
            s[j]=s[j-b];
        }
        s[j]='\0';
        cout<<s<<endl;
    }
}
