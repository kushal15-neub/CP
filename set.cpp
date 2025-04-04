#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        multiset<long long> mp;
        for (int i = 0; i < n; ++i)
        {
            long long candy;
            cin >> candy;
            mp.insert(candy);
        }
        long long cnt = 0;
        for (int i = 0; i < k; ++i)
        {
            auto last=(-- mp.end());
            long long candy=*last;
            cnt+=candy;
            mp.erase(last);
            mp.insert(candy/2);
        }
        cout<<cnt<<endl;
    }
}
