#include<iostream>
#include<algorithm>
using namespace std;
void solve();
void display(int r);

int test,n,d,i,check;
int main(void)
{
    cin>>test;
    while(test--)
    {
        solve();
    }
}

void solve()
{
    check=1;
    cin>>n>>d;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if((a[0]+a[1])<=d)
    {
        check=0;
    }
    else
    {
        check=0;
        for(i=0; i<n; i++)
        {
            if(a[i]>d)
            {
                check=1;
                break;
            }
        }
    }
    display(check);
}

void display(int r)
{
    if(r==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
