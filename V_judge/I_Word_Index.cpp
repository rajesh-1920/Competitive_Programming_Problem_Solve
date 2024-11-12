// Author:  Rajesh Biswas
// Date  :  02.06.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define N 2000009
#define MOD 1000000007
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define mm cout << "-1\n"
#define nl cout << "\n"
#define rrr return
//------------------------------------------------------------------------------------
map<string, int> mmp;
void solve(void)
{
    int i = 1;
    map<string, int> mp1, mp2, mp3, mp4, mp5;
    for (int i = 0; i < 26; i++)
    {
        string s1;
        s1.push_back((char)('a' + i));
        mp1[s1]++;
        for (int j = i + 1; j < 26; j++)
        {
            s1.push_back((char)('a' + j));
            mp2[s1]++;
            for (int k = j + 1; k < 26; k++)
            {
                s1.push_back((char)('a' + k));
                mp3[s1]++;
                for (int l = k + 1; l < 26; l++)
                {
                    s1.push_back((char)('a' + l));
                    mp4[s1]++;
                    for (int x = l + 1; x < 26; x++)
                    {
                        s1.push_back((char)('a' + x));
                        mp5[s1]++;
                        s1.pop_back();
                    }
                    s1.pop_back();
                }
                s1.pop_back();
            }
            s1.pop_back();
        }
        s1.pop_back();
    }
    for (auto ii : mp1)
        mmp[ii.fi] = i++;
    for (auto ii : mp2)
        mmp[ii.fi] = i++;
    for (auto ii : mp3)
        mmp[ii.fi] = i++;
    for (auto ii : mp4)
        mmp[ii.fi] = i++;
    for (auto ii : mp5)
        mmp[ii.fi] = i++;
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
        string s;
        while (cin >> s)
            cout << mmp[s] << '\n';
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
/*
    for(auto &x:v)cin>>x;
*/
