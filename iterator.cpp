#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {1, 2, 3, 4, 5};

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    vector<pair<int, int>> v_pair = {{1, 2}, {3, 4}, {5, 6}};

    // for (it = v.begin(); it != v.end(); ++it)
    // {
    //     cout << (*it) << " ";
    //     // cout << (*(it + 1));
    //     // cout << (*(it + 2));
    //     // cout << (*(it + 3));
    //     // cout << (*(it + 4));
    // }

    vector<pair<int, int>>::iterator it=v_pair.begin();

    for (it = v_pair.begin(); it != v_pair.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}