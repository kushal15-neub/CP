#include <bits/stdc++.h>
using namespace std;

int main()
{
    string d;
    cin >> d;

    if (d == "N")
    {
        cout << "S" << '\n';
    }
    else if (d == "E")
    {
        cout << "W" << '\n';
    }
    else if (d == "NE")
    {
        cout << "NW" << '\n';
    }
    else if (d == "SE")
    {
        cout << "SW" << '\n';
    }
    
    return 0;
}
