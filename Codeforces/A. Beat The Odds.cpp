#include<iostream>
using namespace std;

void solve();
int main(void)
{
    long long int test;
    cin>>test;
    while(test--)
        solve();
}
void solve()
{
    long long int n,i,even,odd;
    cin>>n;
    long long int a[n];
    even=odd=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    if(odd>even)
        cout<<even<<endl;
    else
        cout<<odd<<endl;
}

