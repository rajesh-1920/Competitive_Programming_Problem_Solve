//Author : Rajesh Biswas
//Date : 28.08.2023
//Problem : A. Supercentral Point
//Ratings : 1100
//Contest : Div.3

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void)
{
    int i,j,temp,n,count=0,cnt,uc,dc,lc,rc;
    vector<pair<int,int> > li;
    cin>>n;
    temp=n;
    while(temp--)
    {
        cin>>i>>j;
        li.push_back({i,j});
    }
    for(j=0; j<n; j++)
    {
        uc=rc=dc=lc=cnt=0;
        for(i=1; i<li.size(); i++)
        {
            if(li[0].first==li[i].first&&uc==0&&li[0].second<li[i].second)
            {
                cnt++;
                uc++;
            }
            if(li[0].first==li[i].first&&dc==0&&li[0].second>li[i].second)
            {
                cnt++;
                dc++;
            }
            if(li[0].first>li[i].first&&lc==0&&li[0].second==li[i].second)
            {
                cnt++;
                lc++;
            }
            if(li[0].first<li[i].first&&rc==0&&li[0].second==li[i].second)
            {
                cnt++;
                rc++;
            }
            if(cnt==4)
            {
                count++;
                break;
            }
        }
        li.push_back({li[0].first,li[0].second});
        li.erase(li.begin()+0);
    }
    cout<<count<<endl;
}
