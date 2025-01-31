#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;
    // p = make_pair(11, "abc");

    // p = {2, "abcd"};
    // pair<int, string> &p1 = p; /// p1 referd as an reference

    // p1.first = 3; ////reference value

    // cout << p1.first << " " << p.second << endl;

    // int a[] = {2, 3, 4};
    // int b[] = {4, 5, 6};
    // pair<int, int> p_a[3];
    // p_a[0] = {2, 4};
    // p_a[1] = {3, 5};
    // p_a[2] = {4, 6};

    // swap(p_a[0], p_a[2]);

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << p_a[i].first << " " << p_a[i].second << endl;
    // }

    cin >> p.first;
    cin >> p.second;

    cout << p.first << " ";
    cout << p.second;
}