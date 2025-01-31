#include <bits/stdc++.h>
using namespace std;

struct Actvty
{
    int start, finish;
};
void MAXI(Actvty Ac[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; ++i)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (Ac[j].finish > Ac[j + 1].finish)
            {
                swap(Ac[j], Ac[j + 1]);
                swapped = true;
            }
            if (swapped == false)
            {
                break;
            }
        }
    }
    cout << "Following Activity are selected:::" << "\n";
    int i = 0;
    int count = 0;

    cout << Ac[i].start << "," << Ac[i].finish << "\n";
    for (int j = 1; j < n; ++j)
    {
        if (Ac[j].start >= Ac[i].finish)
        {
            cout << Ac[j].start << "," << Ac[j].finish << "\n";
            count++;
            i = j;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the numnber of elements ::";
    cin >> n;

    Actvty Ac[n];

    cout << "Enter the elements ::";

    for (int i = 0; i < n; ++i)
    {
        cin >> Ac[i].start >> Ac[i].finish;
    }

    MAXI(Ac, n);
}