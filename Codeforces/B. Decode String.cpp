#include<iostream>
#include<string>
using namespace std;
void solve();
int main(void)
{
    int test;
    cin>>test;
    while(test--)
        solve();
}
void solve()
{
    int n,i,j=0;
    char s[51],r[51];
    cin>>n>>s;
    for(i=0; i<n;)
    {
        if(s[i+2]=='0'&&i+2<n&&s[i+3]!='0')
        {
            r[j]=(s[i]-'0')*10+s[i+1]-'0'+'a'-1;
            j++;
            i=i+3;
        }
        else if(s[i+2]=='0'&&i+3<n&&s[i+3]!='0')
        {
            r[j]=(s[i]-'0')*10+s[i+1]-'0'+'a'-1;
            j++;
            i=i+3;
        }
        else
        {
            r[j]=s[i]-'0'+'a'-1;
            j++;
            i++;
        }

    }
    r[j]='\0';
    cout<<r<<endl;
}
