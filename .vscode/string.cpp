// #include <iostream>
// using namespace std;
// int main()
// {

//     string x = "10";
//     string y = "20";

//     string z = x + y;
//     cout << z;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--)
    {

        int m, n;
        cin >> m >> n;

        string a, b;
        cin >> a >> b;

        int i = 0, k = a.length();
        int j = 0, l = b.length();
        int cnt = 0;

        for (int i = 0; i <= m; ++i)
        {

            for (int j = 0; j <= n; ++j)
            {

                if (a[i] == a[j])
                {
                    cnt++;
                    break;
                }
            }
        }

        cout << cnt << "\n";
    }
}
