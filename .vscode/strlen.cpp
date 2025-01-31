#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y;
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> x;
        cin >> y;

        int k = max(0, x - a);
        int l = max(0, y - b);

        int p = k + l;

        if (p <= c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
