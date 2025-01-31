#include <bits/stdc++.h>
using namespace std;

void recus(vector<int> &v, int n, int i)
{
    if (i >= n - 1) // Base case: Stop when we reach the last element
    {
        cout << "YES" << '\n';
        return;
    }

    if (v[i] > v[i + 1]) // If the condition fails, print "NO" and return
    {
        cout << "NO" << '\n';
        return;
    }

    int store = min(v[i], v[i + 1]); // Reduce both elements by the minimum value
    v[i] -= store;
    v[i + 1] -= store;

    recus(v, n, i + 1); // Move to the next index
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    recus(v, n, 0); // Start recursion from index 0
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
