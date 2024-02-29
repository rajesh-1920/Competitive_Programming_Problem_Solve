#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    int i,n,count_x=0,result=0;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]!='x')
        {
            count_x=0;
        }
        if(s[i]=='x')
        {
            count_x++;
        }
        if(count_x>2)
        {
            result++;
        }
    }
    cout<<result<<endl;
}

