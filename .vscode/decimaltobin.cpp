#include <iostream>
#include <math.h>
using namespace std;
long long decimal(int n);

int main()

{
    int n;
    cout << "Enter a number  :::";
    cin >> n;
    /// cout << n;

    int k = decimal(n);
    cout << "binary represantation is :::" << k;
    return 0;
}
long long decimal(int n)
{
    int res, k = 0;
    int i = 1;
    while (n != 0)
    {
        res = n % 2;
        n = n / 2;

        k = k + (i * res);

        i *= 10;
    }
    return k;
}