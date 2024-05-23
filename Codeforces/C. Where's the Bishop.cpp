#include<iostream>
#include<string.h>
#include<string>
using namespace std;
void solve();
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
void solve()
{
    int row,col,i,j,k;
    char s[8][8];
    for(i=0; i<8; i++)
    {
        cin>>s[i];
        for(k=0; k<8; k++)
        {
            for(j=0; j<8; j++)
            {
                if(s[k][j]=='#'&&s[k][j+2]=='#')
                {
                    col=j+2;
                    row=k;
                }
            }
        }
    }
    cout<<row<<" "<<col<<endl;
}
