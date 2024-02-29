#include<iostream>
using namespace std;
int main(void)
{
    int n,t,i,odd,even,j,r;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        r=n*2;
        int a[r];
        odd=even=0;
        for(j=0; j<r; j++)
        {
            cin>>a[j];
            if(a[j]%2==0)
            {
                even++;
            }
            if(a[j]%2!=0)
            {
                odd++;
            }
        }
        if(odd==even)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
