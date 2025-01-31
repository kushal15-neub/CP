#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v;
    bool ans = false;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
        cout << v[v[i - 1] - 1] << "\n";
    }
}