#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int n, m, res = 0;
    cin >> n >> m;
    while (true)
    {
        if (n >= m)
        {
            res += (n - m);
            break;
        }
        if (m % 2 == 0)
            m /= 2;
        else
            m++;
        res++;
    }
    cout << res << endl;
}
