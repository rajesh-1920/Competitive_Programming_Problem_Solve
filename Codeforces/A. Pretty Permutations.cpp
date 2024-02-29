#include<iostream>
using namespace std;
void solve()
{
    int n,i,j,k;
    cin>>n;
    if(n==2)
        cout<<"2 1"<<endl;
    else if(n==3)
        cout<<"3 1 2"<<endl;
    else
    {
        if(n%2==0)
        {
            for(i=2,j=1; i<=n,j<=n; i+=2,j+=2)
                cout<<i<<" "<<j<<" ";
            cout<<endl;
        }
        else
        {
            i=2;
            j=1;
            for(k=0; k<n; k++)
            {
                if(k%2==0)
                {
                    cout<<i<<" ";
                    i+=2;
                }
                if(i>n)
                {
                    break;
                }
                if(k%2!=0)
                {
                    cout<<j<<" ";
                    j+=2;
                }
            }
            cout<<n<<" "<<n-2<<endl;
        }
    }
}
int main(void)
{
    int test;
    cin>>test;
    while(test--)
        solve();
}
