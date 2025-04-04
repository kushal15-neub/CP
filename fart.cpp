#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (is_sorted(v.begin(), v.end()))
        {
            cout << "YES\n";
        }
        else
        {
            int count = 0;
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n - i - 1; ++j)
                {
                    if (v[j] > v[j + 1])
                    {
                        count++;
                    }
                }
            }

            if (count < k)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}