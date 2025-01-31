/////linear search
#include <iostream>
using namespace std;

int main()
{
    int len, index = -1, arr[50], item;
    cout << "Enter an array's length :: ";
    cin >> len;

    cout << "Enter an array's elements  :: ";
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter your item ::";
    cin >> item;

    linear(arr, len, item, -1);

    return 0;
}

void linear(int arr[], int len, int item, int index)
{
    index = -1;
    for (int i = 0; i < len; i++)
    {
        if (item == arr[i])
        {
            index = i + 1;
            break;
        }

        if (index == -1)
        {
            cout << "NO data found";
        }
        else
        {
            cout << "Your data founf at postion ::" << index << endl;
        }
    }
}