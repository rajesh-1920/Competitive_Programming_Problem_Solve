#include<iostream>
using namespace std;
int main(void)
{
    int n,m,i,pos=1,need,h=0;
    cin>>n>>m;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        need=a[i]/m;
        if(a[i]%m>0)
        {
            need++;
        }
        if(need>=h)
        {
            h=need;
            pos=i+1;
        }
    }
    cout<<pos<<endl;
}
