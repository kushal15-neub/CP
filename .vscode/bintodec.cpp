#include <iostream>
#include <math.h>
using namespace std;
long long binary(int n);

int main()

{
    int n;
    cout << "Enter a number  :::";
    cin >> n;
    /// cout << n;

    float k = binary(n);
    cout << "decimal represantation is :::" << k;
    return 0;
}

long long binary(int n)
{
    int res;
    int k = 0;
    int i = 0;
    while (n != 0)
    {
        res = n % 10;
        n = n / 10;

        k = k + (res * pow(2, i));

        i++;
    }
    return k;
}