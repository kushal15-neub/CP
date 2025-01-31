/////insertion sort
#include <iostream>
using namespace std;
void insertion(int arr[], int len, int k, int key);
int main()
{
    int len, n, arr[50], k, key;
    cout << "Enter an array's length :: ";
    cin >> len;

    cout << "Enter an array's elements  :: ";
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    insertion(arr, len, k, key);

    return 0;
}

void insertion(int arr[], int len, int k, int key)
{
    for (int i = 1; i < len; i++)
    {
        key = arr[i];
        k = i - 1;
        while (k > 0 && arr[k] > key)
        {
            arr[k + 1] = arr[k];
            k = k - 1;
        }
        arr[k + 1] = key;
    }

    for (int i = 0; i < len; i++)
    {
        cout << "Your sorted elements are::" << arr[i] << " " << endl;
    }
}
