#include <bits/stdc++.h>
using namespace std;

int partition(int ar[], int l, int r)
{
    int pivot = ar[l];
    int p = l + 1;
    int q = r;

    while (p <= q)
    {
        while (1)
        {
            if (ar[p] > pivot)
            {
                break;
            }
            p++;
        }
        while (1)
        {
            if (ar[q] <= pivot)
            {
                break;
            }
            q--;
        }

        if (p <= q)
        {
            swap(ar[p], ar[q]);
        }
    }
    swap(ar[q], ar[l]);
    return q;
}

void quicksort(int ar[], int l, int r)
{
    if (l < r)
    {
        int j = partition(ar, l, r);
        quicksort(ar, l, j - 1);
        quicksort(ar, j + 1, r);
    }
}

int main()
{

    int len;
    cout << "Enter the Lenght of an array :::";
    cin >> len;

    int ar[len];

    cout << "Enter the elements of an array ::";
    for (int i = 0; i < len; ++i)
    {
        cin >> ar[i];
    }
    quicksort(ar, 0, len - 1);

    cout << "Sorted array ::";
    for (int i = 0; i < len; ++i)
    {
        cout << ar[i] << "  ";
    }
}