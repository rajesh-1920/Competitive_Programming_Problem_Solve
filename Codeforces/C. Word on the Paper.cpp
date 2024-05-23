#include<iostream>
#include<string>
using namespace std;
void solve(void);
int main(void)
{
    int test;
    cin>>test;
    while(test--)
        solve();
}
void solve(void)
{
    int n,i,j,k=0;
    char s[9],r[9];
    for(i=0; i<8; i++)
    {
        cin>>s;
        for(j=0; j<8; j++)
        {
            if(s[j]!='.')
                {
                    r[k]=s[j];
                    k++;
                    break;
                }
        }
    }
    r[k]='\0';
    cout<<r<<endl;
}
