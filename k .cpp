#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int b;
    cin >> b; // since m = 1, we only read one number
    
    vector<int> possible;
    
    for (int i = 0; i < n; ++i) {
        possible.push_back(a[i]);      // Keeping original
        possible.push_back(b - a[i]);  // Applying transformation
    }
    
    sort(possible.begin(), possible.end());
    
    // Check if we can form a sorted array of size `n`
    bool canSort = false;
    for (int i = 0; i <= possible.size() - n; ++i) {
        bool valid = true;
        for (int j = 0; j < n - 1; ++j) {
            if (possible[i + j] > possible[i + j + 1]) {
                valid = false;
                break;
            }
        }
        if (valid) {
            canSort = true;
            break;
        }
    }

    cout << (canSort ? "YES" : "NO") << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
