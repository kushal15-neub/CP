#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    int n; // sizwe of an inputs
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string s; /// taking string as input
        cin >> s;
        m[s]++; // initially map value is 0.thus it iterate +1 in every time
    }
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
}