#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        long long k,x;
        cin >> n >> k >> x;
        vector<int> v(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        vector<int> p(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            p[i + 1] = p[i] + v[i];
        }

        long long total_sum = p[n];
        vector<long long> array(n, 0);
        long long sum;

        for (int i = 0; i < n; ++i)
        {
            sum = p[n] - p[i];

            if (sum >= x)
            {
                int lower = i + 1, higher = n, ans = n;
                while (lower <= higher)
                {
                    int mid = (lower + higher) / 2;
                    if (p[mid] - p[i] >= x)
                    {
                        ans = mid;
                        higher = mid - 1;
                    }
                    else
                    {
                        lower = mid + 1;
                    }
                }
                array[i] = ans - i;
            }
            else
            {
                long long dx=x-sum;
                long long cc=(dx+total_sum-1)/total_sum;
                long long nb=(n-i)+(cc-1)*(long long )n;
                long long rs2=x-((p[n]-p[i])+(cc-1)*total_sum);
                int j=lower_bound(p.begin(),p.end(),rs2)-p.begin();
                array[i]=nb+j;

            }
        }

            long long mass = 0;
            for (int i = 0; i < n; i++)
            {
                long long ll = array[i];
                long long maxi = k * (long long)n - i - ll;
                if (maxi < 0)
                    continue;
                long long maxz = maxi / n;
                if(maxz>=k) maxz=k-1;
                mass = mass + (maxz + 1);
            }

            cout << mass << '\n';
        }
    

    return 0;

}
