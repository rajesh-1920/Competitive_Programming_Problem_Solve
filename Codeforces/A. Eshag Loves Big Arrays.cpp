#include<iostream>
#include<algorithm>
using namespace std;
void solve();
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
void solve()
{
    int n,i,count=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            count ++;
        }
        else
        {
            break;
        }
    }
    n=n-count;
    cout<<n<<endl;
}
