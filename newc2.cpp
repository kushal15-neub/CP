#include <bits/stdc++.h>
using namespace std;

bool findactual(pair<int, int> a, pair<int, int> b)
{
    if (a.first > b.first){
        return true;
    }
    else if (a.first == b.first && a.second < b.second){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), findactual);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i].first << " " << a[i].second<<" ";
        cout << endl;
    }
    
}

// Lembda Function:
// cout<<[](int x,int y){return x+y;}(4,7)<<endl;
