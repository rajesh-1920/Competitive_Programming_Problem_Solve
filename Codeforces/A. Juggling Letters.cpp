//Author : Rajesh Biswas
//Date : 18.08.2023
//Problem : Juggling Letters
//Rating :
//Contest : Div.2

#include<iostream>
#include<algorithm>
#include<string.h>
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
    int n,i,l,ar[26]= {0},j,flag;
    cin>>n;
    char s[10001];
    for(i=0; i<n; i++)
    {
        cin>>s;
        l=strlen(s);
        for(j=0; j<l; j++)
            ar[s[j]-'a']++;
    }
    flag=1;
    for(i=0; i<26; i++)
    {
        if(ar[i]%n!=0)
        {
            cout<<"NO"<<endl;
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout<<"YES"<<endl;
}

