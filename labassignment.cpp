#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}
vector<int> findClosestElements(vector<int> &arr, int k, int target)
{
    int closestIndex = binarySearch(arr, target);

    int low = closestIndex - 1;
    int high = closestIndex;

    while (k--)
    {
        if (low >= 0 && (high >= arr.size() || abs(arr[low] - target) <= abs(arr[high] - target)))
        {
            low--;
        }
        else
        {
            high++;
        }
    }

    vector<int> result(arr.begin() + low + 1, arr.begin() + high);
    return result;
}

int main()
{
    cout << "Enter the number of elements: ";
    int N, k, target;
    cin >> N;
    vector<int> arr;

    cout << "Array: ";
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << "Enter the k-th closest element: ";
    cin >> k;

    cout << "Enter the target element: ";
    cin >> target;

    vector<int> result = findClosestElements(arr, k, target);

    cout << "Closest elements: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i < result.size() - 1)
        {
            cout << ", ";
        }
    }
    return 0;
}