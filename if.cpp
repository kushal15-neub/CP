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

    if (z > 10)
    {
        cout << " the sum is grreater than x ", "\n";
    }
    else if (z < 20)
    {

        cout << " the sum is less  than x ", "\n";
    }

    else
    {

        cout << " owww !!! the sum is not grreater than x ", "\n";
    }
}