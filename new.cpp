#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int bb;
    cin >> bb;

    bool ok = false;
    a[0] = min(bb - a[0], a[0]);

    for (int i = 1; i < n; ++i) {
        if (a[i] > a[i - 1]) {
            if (  bb - a[i] > a[i - 1]) {
                a[i] = min(a[i], bb - a[i]);
            }
        } 
        else if(bb-a[i]<a[i-1]) {
            ok = true;
            break;
        }
    }

    if(ok==true) cout<<"NO\n";
    else cout<<"YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
