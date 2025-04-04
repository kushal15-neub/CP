// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long n;
//     cin >> n;
//     map<int, multiset<string>> mp;
//     for (int i = 0; i < n; ++i)
//     {
//         int x;
//         string s;
//         cin >> x >> s;
//         mp[-1 * x].insert(s);
//     }
//     for (auto &marks : mp)
//     {
//         auto &sname = marks.second;
//         auto markk = marks.first;

//         for (auto &student : sname)
//         {
//             cout << student << " " << (-1 * markk);
//         }
//     }
// }
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> v(n);

    int zero = 0, one = 0;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];  
        if (v[i] == "0") zero++;
        else one++;
    }

    if (zero == 0) {  // All "1"s
        cout << 1 << '\n';
        return;
    }
    if (one == 0) {  // All "0"s
        cout << 0 << '\n';
        return;
    }
    
    // If both "0"s and "1"s exist, determine the output based on their counts
    cout << min(zero + 1, one) << '\n';  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
