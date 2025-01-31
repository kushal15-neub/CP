#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :::";
    cin >> n;
    bool prime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            /// cout << "Not a prime number ";
            prime = 0;
            break;
        }
        // else
        // {
        //     cout << "Prime number ";
        // }
    }
    if (prime == 1)
    {
        cout << "prime number ";
    }
    else
    {
        cout << "Prime number ";
    }
}