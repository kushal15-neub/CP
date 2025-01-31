#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << " enter first number.... ", "\n";
    cin >> x;
    cout << " enter second  number.... ", "\n";
    cin >> y;
    int z = x + y;
    string res = (z > 10) ? " well done " : " oops !! ";
    cout << res;
}
