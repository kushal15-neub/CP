#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> &m)
{
    cout << "the size of this map is ::";
    cout << m.size() << endl;
    for (auto &p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
}
int main()
{
    map<int, string> m;
    m[2] = "bcd";
    m[1] = "abc";
    m[9] = "xyz";
    m[3] = "snednd";
    m.insert({4, "sedtd"});

    // map<int, string>::iterator it;

    // for (it = m.begin(); it != m.end(); ++it)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    auto it = m.find(6); /// time complexit :: O(logn)  {insertion + printing }
    m.erase(7);
    m.clear();
    // if (it == m.end())
    // {
    //     cout << "No elements found ";
    // }
    // else
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    print(m);
}