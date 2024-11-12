// Author:  Rajesh Biswas
// Date  :  30.08.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define f(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) f(i, 0, n) cin >> (v[i]);
#define No cout << ("No\n")
#define NO cout << ("NO\n")
#define Yes cout << ("Yes\n")
#define YES cout << ("YES\n")
#define nl cout << ("\n")
#define rrr return
#define fi first
#define sc second
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define contains(a, b) (find(all(a), (b)) != (a).end())

#define PI acos(-1)
#define MOD 1000000007
#define eps 0.0000000001
#define inf 90000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 200009
//------------------------------------------------------------------------------------
void apply_operations(vector<int> &a, const vector<pair<char, pair<int, int>>> &operations)
{
    int n = a.size();
    set<int> unique_values;

    // Collect unique values from the array and operation ranges
    for (int i = 0; i < n; ++i)
    {
        unique_values.insert(a[i]);
    }
    for (const auto &op : operations)
    {
        unique_values.insert(op.second.first);
        unique_values.insert(op.second.second);
    }

    // Coordinate compression
    map<int, int> compressed;
    int idx = 0;
    for (int value : unique_values)
    {
        compressed[value] = idx++;
    }

    // Create a difference array for the compressed range
    vector<int> diff(idx + 1, 0);

    // Apply operations using the difference array
    for (const auto &op : operations)
    {
        char op_type = op.first;
        int l = compressed[op.second.first];
        int r = compressed[op.second.second];

        if (op_type == '+')
        {
            diff[l] += 1;
            if (r + 1 < idx)
                diff[r + 1] -= 1;
        }
        else if (op_type == '-')
        {
            diff[l] -= 1;
            if (r + 1 < idx)
                diff[r + 1] += 1;
        }
    }

    // Apply the difference array to the original array with compression mapping
    for (int i = 0; i < n; ++i)
    {
        int value = a[i];
        a[i] += diff[compressed[value]];
    }

    // Find the maximum value in the updated array
    int max_value = *max_element(a.begin(), a.end());
    cout << max_value << endl;
}

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<int> a(n);
    scv(a, n);
    vector<pair<char, pair<int, int>>> operations;
    while (n--)
    {
        char ch;
        ll x, y;
        cin >> ch >> x >> y;
        operations.push_back({ch, {x, y}});
    }
    apply_operations(a, operations);

    return 0;
}