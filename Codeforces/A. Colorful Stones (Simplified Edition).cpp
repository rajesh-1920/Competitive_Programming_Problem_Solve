#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    int i,j,counter=1;
    string s,t;
    cin>>s>>t;
    i=j=0;
    while(t[i]!='\0')
    {
        if(t[i]==s[j])
        {
            j++;
            counter++;
        }
        i++;
    }
    cout<<counter<<endl;
}
