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
    fast_cin();
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
            if (!is_sorted(v.begin(), v.end()) && k > 1){
                cout << "YES\n";
            }

            else{
                cout << "NO\n";
            }
        }
    }

    return 0;
}
