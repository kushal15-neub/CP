#include <bits/stdc++.h>
using namespace std;

int Binarysearch(int arr[], int l, int r, int x);

bool Majority(int arr[], int n, int x)
{
    int i = Binarysearch(arr, 0, n - 1, x);
    if (i == -1)
    {
        return false;
    }
    if ((i + n / 2) <= (n - 1) && arr[i + n / 2] == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Binarysearch(int arr[], int l, int r, int x)
{

    int mid = (l + r) / 2;

    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] < x)
    {
        return Binarysearch(arr, (mid + 1), r, x);
    }

    else
    {
        return Binarysearch(arr, l, (mid - 1), x);
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements of an array :::";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of an array :::";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the position :::";
    cin >> x;

    if (Majority(arr, n, x))
    {
        cout << x << " " << " appears more than  ::" << n / 2 << " " << "times" << "\n";
    }

    else
    {
        cout << x << " " << " doesnot appears more than ::" << n / 2 << "  " << "times" << "\n";
    }
    return 0;
}