#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n)
{
    int index = 1;
    int freq = 1;

    int element = arr[0];

    while (index < n)
    {
        if (arr[index - 1] == arr[index])
        {
            freq++;
            index++;
        }
        else
        {
            cout << element << "::" << freq << "\n";
            element = arr[index];

            index++;
            freq = 1;
        }
    }

    cout << element << "::" << freq << "\n";
}

int main()
{

    int n;
    cout << "Enter the number of elements :::";
    cin >> n;

    int arr[n];
    cout << "Enter the elements :::";

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "Frequencies of an array ::::" << "\n";
    Frequency(arr, n);
}