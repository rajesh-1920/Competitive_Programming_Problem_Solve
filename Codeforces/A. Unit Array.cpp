#include<iostream>
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
    int n,i,cm,cp,res=0;
    cin>>n;
    int a[n];
    cm=cp=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==-1)
        {
            cm++;
        }
        if(a[i]==1)
        {
            cp++;
        }
    }
    while(1)
    {
        if(cp-cm>=0&&cm%2==0)
        {
            break;
        }
        cp++;
        cm--;
        res++;
    }
    cout<<res<<endl;
}
