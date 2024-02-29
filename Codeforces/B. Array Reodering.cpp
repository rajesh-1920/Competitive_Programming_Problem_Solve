//Rajesh Biswas
//Date : 14.08.2023
//Problem : Array Reodering

#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;

#define ll long long int
void solve(void);
ll GCD(ll x,ll y);

int main(void)
{
    ll test;
    cin>>test;
    while(test--)
        solve();
}
void solve(void)
{
    ll n,i,x,count=0;
    list<ll> mylist;
    list<ll>::iterator it1,it2,temp;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        if(x==1||x%2!=0)
            mylist.push_back(x);
        else
            mylist.push_front(x);
    }
    i=1;
    for(it1=mylist.begin(); it1!=mylist.end(); it1++)
    {
        temp=it1;
        temp++;
        for(it2=temp; it2!=mylist.end(); it2++)
        {
            if(GCD(*it1,(2*(*it2)))>1)
                count++;
                i++;
        }
    }
    cout<<count<<endl;
}
ll GCD(ll x,ll y)
{
    if(y==0)
        return x;
    else
        return GCD(y,x%y);
}
