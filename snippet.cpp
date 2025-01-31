#include <iostream>
using namespace std;

int countOperations(int l, int r, int k)
{
    int operations = 0;

    for (int x = l; x <= r; x++)
    {
        int countMultiples = 0;

        // Count multiples of x in the range [l, r]
        for (int multiple = x; multiple <= r; multiple += x)
        {
            if (multiple >= l)
            {
                countMultiples++;
            }
        }

        // If x has at least k multiples in the range, count as an operation
        if (countMultiples >= k)
        {
            operations++;
        }
    }
    return operations;
}

int main()
{
    int t; // Number of test cases
    cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        cout << countOperations(l, r, k) << endl;
    }
    return 0;
}
