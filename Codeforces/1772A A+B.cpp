#include<iostream>
using namespace std;
int main(void)
{
    int i,t,r;
    cin>>t;
    for(i=0;i<t;i++)
    {
        char s[4];
        cin>>s;
        r=s[0]+s[2]-'0'-'0';
        cout<<r<<endl;
    }
}
