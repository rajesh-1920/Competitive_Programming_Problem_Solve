#include<iostream>
using namespace std;
int main(void)
{
    int a,b,m,n,count=0;
    cin>>n>>m;
    for(a=0;;a++)
    {
        b=n-(a*a);
        if(b<0)
        {
            break;
        }
        if((a+(b*b))==m)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
