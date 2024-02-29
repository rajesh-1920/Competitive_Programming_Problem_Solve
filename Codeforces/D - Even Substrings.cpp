// Author : Rajesh Biswas
// Date : 23.08.2023
// Problem : D - Even Substrings
// Contest : Post Exam Marathon Contest by CSE-CLUB, PSTU
// Password : THINK

#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int n, i, ev = 0, count = 0, j;
    string s;
    cin >> n >> s;
    for (i = n - 1; i >= 0; i--)
    {
        if ((s[i] - '0') % 2 == 0)
        {
            ev++;
            count+=i;
        }
    }
    cout << count + ev << endl;
}
