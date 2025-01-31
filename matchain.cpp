#include <bits/stdc++.h>
using namespace std;

int print(int p[], int len)
{
    int j, k, l, q;
    int ar[len][len];

    for (int i = 1; i < len; ++i)
    {

        ar[i][i] = 0;

        for (int l = 2; l < len - 1; ++l)
        {

            for (int i = 1; i < len - l - 1; ++i)
            {

                j = i + l - 1;

                ar[i][j] = INT_MAX;

                for (int k = i; k <= j - 1; ++j)
                {

                    q = ar[i][k] + ar[k + 1][j] + p[i - 1] * p[k] * p[j];
                    if (q < ar[i][j])
                    {
                        ar[i][j] = q;
                    }
                }
            }
        }
    }

    return ar[1][len - 1];
}

int main()
{

    int len;
    cout << "Enter the length of an array ::";
    cin >> len;

    int a[len];

    int ar[len];

    cout << "Enter the elements of an array ::";

    int min = INT_MAX;

    for (int i = 0; i < len; ++i)
    {
        cin >> a[i];
    }

    cout << print(a, len);
}
