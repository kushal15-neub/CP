#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long ar[N];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  while (m--)
  {
    int a, b, k;
    cin >> a >> b >> k;
    ar[a] += k;
    ar[b + 1] -= k;
  }

  for (int i = 1; i <= n; ++i)
  {
    ar[i] += ar[i - 1];
  }

  long long max = -1;
  for (int i = 1; i <= n; ++i)
  {
    if (max < ar[i])
    {
      max = ar[i];
    }
  }

  cout << max << '\n';

  return 0;
}