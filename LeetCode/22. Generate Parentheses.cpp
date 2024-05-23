#include <bits/stdc++.h>
using namespace std;

vector<string> valid;

void generate(string &s, int op, int cl)
{
    if (op == 0 && cl == 0)
    {
        valid.push_back(s);
        return;
    }
    if (op > 0)
    {
        s.push_back('(');
        generate(s, op - 1, cl);
        s.pop_back();
    }
    if (cl > 0 && op < cl)
    {
        s.push_back(')');
        generate(s, op, cl - 1);
        s.pop_back();
    }
}

vector<string> generateParenthesis(int n)
{
    valid.clear();
    string s = "";
    generate(s, n, n);
    return valid;
}

int main()
{
    // vector<int> nums = {4, 1, 2, 1, 2};
    string s = "";
    generate(s, 3, 3);
    for (auto it : valid)
        cout << it << '\n';
}