#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> symb = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};

string isBalanced(string s)
{
    stack<char> st;
    for (char x : s)
    {
        if (symb[x] < 0)
        {
            st.push(x);
        }
        else
        {
            if (st.empty())
                return "NO";
            char top = st.top();
            st.pop();
            if (symb[top] + symb[x] != 0)
            {
                return "NO";
            }
        }
    }

    if (st.empty())
        return "YES";
    return "NO";
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
}