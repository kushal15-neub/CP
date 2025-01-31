#include <bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2, int m, int n)
{
    int L[m + 1][n + 1];

    for (int i = 0; i <= m; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {
            if (i == 0 || j == 0)
            {
                L[i][j] = 0;
            }

            else if (s1[i - 1] == s2[j - 1])
            {
                L[i][j] = L[i - 1][j - 1] + 1;
            }
            else
            {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
    }
    return L[m][n];
}

void lcs1(string s1, string s2, int m, int n)
{
    int L[m + 1][n + 1];
    int d[m + 1][n + 1];

    for (int i = 0; i <= m; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {
            if (i == 0 || j == 0)
            {
                L[i][j] = 0;
            }

            else if (s1[i - 1] == s2[j - 1])
            {
                L[i][j] = L[i - 1][j - 1] + 1;
                d[i][j] = 1;
            }
            else
            {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);

                if (L[i][j] == L[i][j - 1])
                {
                    d[i][j] = 2;
                }
                else
                {
                    d[i][j] = 3;
                }
            }
        }
    }

    int k = m;
    int l = n;

    string subs = "";

    while (k > 0 && l > 0)
    {
        if (d[k][l] == 1)
        {
            subs = subs + s1[k - 1];
            k--;
            l--;
        }
        else if (d[k][l] == 2)
        {
            l--;
        }
        else
        {
            k--;
        }
    }

    reverse(subs.begin(), subs.end());
    cout << "THE Longest Common Subsequence  Path is :::::" << subs;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int m = s1.length();
    int n = s2.length();
    cout << "THE Longest Common Subsequence is :::::" << lcs(s1, s2, m, n) << "\n";
    lcs1(s1, s2, m, n);
}