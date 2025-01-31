/////bubble sort
#include <iostream>
using namespace std;

void bubble(int arr[], int len);
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

    bubble(arr, len);

    return 0;
}

void bubble(int arr[], int len)
{
    bool swapped = false;

    for (int i = 1; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << "Your sorted elements are::" << arr[i] << " " << endl;
    }
}
