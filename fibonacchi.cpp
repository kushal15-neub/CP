#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :::";
    cin >> n;

    int a = 0;
    int b = 1;
    cout << "fibonacci number :::";
    for (int i = 1; i < n; i++)
    {
        int sum = a + b;
        cout << sum << endl;
        a = b;
        b = sum;
    }
}