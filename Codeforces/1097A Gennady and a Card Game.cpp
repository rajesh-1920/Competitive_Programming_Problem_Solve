#include<iostream>
using namespace std;
int main(void)
{
    char t[3],h1[3],h2[3],h3[3],h4[3],h5[3];
    cin>>t;
    cin>>h1>>h2>>h3>>h4>>h5;
    if(t[0]==h1[0]||t[1]==h1[1])
    {
        cout<<"YES"<<endl;
    }
    else if(t[0]==h2[0]||t[1]==h2[1])
    {
        cout<<"YES"<<endl;
    }
    else if(t[0]==h3[0]||t[1]==h3[1])
    {
        cout<<"YES"<<endl;
    }
    else if(t[0]==h4[0]||t[1]==h4[1])
    {
        cout<<"YES"<<endl;
    }
    else if(t[0]==h5[0]||t[1]==h5[1])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
