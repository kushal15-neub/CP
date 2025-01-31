#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int hsh[N];

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            a[i] = a[i] + 6;
            hsh[a[i]]++;
        }
    }
    int qq;
    cin >> qq;

    while (qq--)
    {
        int x;
        cin >> x;
        hsh[x];

        cout << hsh[x] << "\n";
    }
}