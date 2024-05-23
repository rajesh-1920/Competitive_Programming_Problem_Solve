#include<iostream>
using namespace std;
int main(void)
{
    int t,i,n,px,py,r,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        char s[n+1];
        cin>>s;
        px=py=0;
        for(j=0;j<n;j++)
        {
            if(s[j]=='L')
            {
                px--;
            }
            else if(s[j]=='R')
            {
                px++;
            }
            else if(s[j]=='U')
            {
                py++;
            }
            else if(s[j]=='D')
            {
                py--;
            }
            r=1;
            if(px==1&&py==1)
            {
                r=0;
                break;
            }
        }
        if(r==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
