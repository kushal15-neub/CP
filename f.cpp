#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int bb;
    cin >> bb;
    bool ok = false;

    a[0] = min(a[0], bb - a[0]); // Fixed the incorrect variable reference

    for (int i = 1; i < n; ++i) { // Fixed syntax
        if (a[i] < a[i - 1]) {
            ok = true;
            break;
        } else if (bb - a[i] > a[i - 1]) {
            a[i] = min(bb - a[i], a[i]);
        }
    }

    if (ok)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
