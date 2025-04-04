#include <iostream>
#include <vector>
using namespace std;

string can_construct_a(int n, vector<int>& b) {
    vector<int> a;
    a.push_back(1); // Initial value, can be anything
    a.push_back(b[0] == 0 ? 2 : 1); // Second element based on b2
    
    for (int i = 0; i < n - 2; i++) {
        if (b[i] == 1) {
            a.push_back(a.back()); // Ensure a[i] = a[i-1] = a[i+1]
        } else {
            if (a.back() == a[a.size() - 2]) {
                a.push_back(a.back() + 1); // Change value to break equality
            } else {
                a.push_back(a.back()); // Keep value different
            }
        }
    }
    

    for (int i = 1; i < n - 1; i++) {
        int expected_b = (a[i - 1] == a[i] && a[i] == a[i + 1]) ? 1 : 0;
        if (expected_b != b[i - 1]) {
            return "NO";
        }
    }
    
    return "YES";
}

void solve() {
    int t;
    cin >> t;
    vector<string> results;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n - 2);
        for (int i = 0; i < n - 2; i++) {
            cin >> b[i];
        }
        results.push_back(can_construct_a(n, b));
    }
    
    for (const string& result : results) {
        cout << result << "\n";
    }
}

int main() {
    solve();
    return 0;
}
