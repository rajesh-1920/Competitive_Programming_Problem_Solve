//Author : Rajesh Biswas
//Date : 28.08.2023
//Problem : A. Middle of the Contest
//Ratings : 1100
//Contest : div-3

#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(void)
{
    string s1,s2;
    ll h1,m1,h2,m2,dif,i;
    cin>>s1>>s2;
    h1=((s1[0]-'0')*10)+(s1[1]-'0');
    m1=((s1[3]-'0')*10)+(s1[4]-'0');
    m2=((s2[3]-'0')*10)+(s2[4]-'0');
    h2=((s2[0]-'0')*10)+(s2[1]-'0');
    if(h1<h2)
        dif=(h2*60+m2)-(h1*60+m1);
    else if(h1>h2)
        dif=24*60-((h1*60+m1)-(h2*60+m2));
    else
    {
        if(m1>m2)
            dif=m1-m2;
        else
            dif=m2-m1;
    }
    dif/=2;
    h1+=dif/60;
    m1+=dif%60;
    if(m1>=60)
    {
        h1+=m1/60;
        m1=m1%60;
    }
    if(h1>=24)
        h1%=24;
    cout<<setw(2)<<setfill('0')<<h1<<":"<<setw(2)<<setfill('0')<<m1<<endl;
}
