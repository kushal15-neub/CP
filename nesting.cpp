#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<string, string>, vector<int>> mp;
    set<pair<string, string>>st;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string fn, ln;
        cin >> fn >> ln;
        int x;
        cin >> x;
        for (int i = 0; i < x; ++i)
        {
            int k;
            cin >> k;
            mp[{fn, ln}].push_back(k);
        }
    }
    for (auto &u : mp)
    {
        auto &name = u.first;
        cout << name.first << " " << name.second << endl;
        auto &j = u.second;
        cout << j.size() << " " << endl;

        for (auto &v : j)
        {
            cout << v << " ";
        }
        cout << endl;
    }
}
