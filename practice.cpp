#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);
    long t = 1;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long ans = 0;
        bool ok = false;

        vector<long> v(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            ans += v[i];
        }

        // cout << ans << "\n";

        if (ans % 2 == 0)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
    }
    return 0;
}