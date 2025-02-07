/// Given n queeries print the string in leicographical order with thier frequencies

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> mp;
   
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << mp[s] << endl;
    }
    return 0;
}
