#include<iostream>
using namespace std;
void solve(void);
int main(void)
{
    int test;
    cin>>test;
    while(test--)
        solve();
}
void solve(void)
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    if(a[0]+a[1]<=a[n-1])
        cout<<1<<" "<<2<<" "<<n<<endl;
    else
        cout<<-1<<endl;
}
