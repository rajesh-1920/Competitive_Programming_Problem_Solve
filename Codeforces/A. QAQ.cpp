#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    int i,j,k,count;
    string s;
    cin>>s;
    count=i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='Q')
        {
            j=i+1;
            while(s[j]!='\0')
            {
                if(s[j]=='A')
                {
                    k=j+1;
                    while(s[k]!='\0')
                    {
                        if(s[k]=='Q')
                        {
                            count++;
                        }
                        k++;
                    }
                }
                j++;
            }
        }
        i++;
    }
    cout<<count<<endl;
}
