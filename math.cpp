// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int x, y;
//     x = 10;
//     y = 20;
//     cout << tan(x);
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         int n, sum = 0, s, i;
//         cin >> n;
//         vector<int> v;

//         for (i = 1; i <= n; ++i)
//         {

//             int a;
//             cin >> a;
//             v.push_back(a);
//         }

//         for (i = 0; i < v.size(); ++i)
//         {

//             sum = sum + s / 3;
//         }
//         cout << sum << "\n";
//     }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string x;
    cin >> x;

    for (int i = 0; i < x.length(); ++i)
    {
        if (i == '0' && x[i] == '9')
        {
            continue;
        }
        else
        {
            if (x[i] > '5' && x[i] < '9')
            {
                x[i] = ('9' - x[0]) + '0';
            }
        }
    }
    cout << x;
}