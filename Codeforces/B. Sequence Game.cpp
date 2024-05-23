//Author : Rajesh Biswas
//Date : 24.08.2023
//Problem : B. Sequence Game
//Ratings :
//Contest : Div.3

#include<iostream>
using namespace std;
typedef long long int ll;
void solve(void);
int main(void)
{
    ll test;
    cin>>test;
    while(test--)
        solve();
}
void solve(void)
{
    ll n,m,i,j=1;
    cin>>n;
    ll b[n],a[2*n];
    for(i=0; i<n; i++)
        cin>>b[i];
    a[0]=b[0];
    for(i=1; i<n; )
    {
        if(b[i-1]<=b[i])
        {
            a[j]=b[i];
            i++;
            j++;
        }
        else
        {
            a[j]=b[i];
            j++;
            a[j]=b[i];
            j++;
            i++;
        }
    }
    cout<<j<<endl;
    for(i=0; i<j; i++)
        cout<<a[i]<<" ";
    cout<<endl;

}
