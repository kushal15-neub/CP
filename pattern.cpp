#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {

        ios::sync_with_stdio(false);
        cin.tie(0);

        int n, k, l, s;
        int count = INT_MAX;

        cin >> n;

        int a[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int i = 1; i < n; ++i)
        {
            if (a[i - 1] > a[i])
            {
                count = 0;
                break;
            }
            else
            {

                count = min(count, ((a[i] - a[i - 1]) / 2) + 1);
            }
        }

        cout << count << "\n";
    }
}