#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        else if ((m >= n && m > k) || (m >= k && m < n) || (m < k && m >= n))
        {
            s = min(n, k);
            cout << s << "\n";
        }
        else if (k > m && m < n)
        {
            s = m;
            n -= m;
            k -= m;
            s += min(n / 2, k);
            cout << s << "\n";
        }
    }
    return 0;
}