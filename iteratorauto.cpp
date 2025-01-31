#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {{1, 2, 3, 4, 5, 6, 7}};
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << "\n";

    vector<pair<int, int>> v_p = {{1, 2}, {3, 4}};
    for (auto &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }

    cout << "\n";
    auto a = 1;
}