#include<iostream>
using namespace std;
int main(void)
{
    int i,n,k;
    char s[100];
    cin>>n>>s;
    k=0;
    for(i=0;i<n;i=i+k)
    {
        s[k]=s[i];
        k++;
    }
    s[k]='\0';
    cout<<s<<endl;
}
