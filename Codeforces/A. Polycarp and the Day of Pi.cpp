#include<iostream>
#include<string>
#include<string.h>
using namespace std;
void solve();

int main(void)
{
    long int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}

void solve()
{
    string main_PI="314159265358979323846264338327",pi;
    cin>>pi;
    int i=0,count=0;
    while(pi[i]!='\0')
    {
        if(pi[i]!=main_PI[i])
        {
            break;
        }
        i++;
        count++;
    }
    cout<<count<<endl;
}
