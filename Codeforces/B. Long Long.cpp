#include<iostream>
#include<algorithm>
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
    long long int n,sum=0,i,count=0,j;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=0)
        {
            sum=sum+a[i];
        }
        else
        {
            sum=sum-a[i];
        }
    }
    for(i=0;i<n;)
    {
        if(a[i]==0)
        {
            i++;
            continue;
        }
        else if(a[i]<0)
        {
            j=i;
            count++;
            while(1)
            {
                if(a[j]>0||j==n)
                {
                    break;
                }
                j++;
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    cout<<sum<<" "<<count<<endl;
}
