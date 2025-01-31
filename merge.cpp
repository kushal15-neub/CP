#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int mid, int r)
{
   int ls = mid - l + 1;
   int rs = r - mid;

   int leftsub[ls], rightsub[rs];

   for (int i = 0; i < ls; ++i)
   {
      leftsub[i] = arr[l + i];
   }

   for (int j = 0; j < rs; ++j)
   {
      rightsub[j] = arr[mid + 1 + j];
   }

   int i = 0, j = 0, k = l;

   while (i < ls && j < rs)
   {
      if (leftsub[i] <= rightsub[j])
      {
         arr[k] = leftsub[i];
         i++;
      }
      else
      {
         arr[k] = rightsub[j];
         j++;
      }
      k++;
   }

   while (i < ls)
   {
      arr[k] = leftsub[i];
      i++;
      k++;
   }

   while (j < rs)
   {
      arr[k] = rightsub[j];
      j++;
      k++;
   }
}

void merge_sort(int arr[], int l, int r)
{
   if (l < r)
   {
      int mid = (l + r) / 2;
      merge_sort(arr, l, mid);
      merge_sort(arr, mid + 1, r);
      Merge(arr, l, mid, r);
   }
}

int main()
{
   int n;
   cout << "Enter the length of an array: ";
   cin >> n;
   int arr[n];
   cout << "Enter the elements of an array: ";

   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   merge_sort(arr, 0, n - 1);

   cout << "Sorted array: ";
   for (int i = 0; i < n; ++i)
   {
      cout << arr[i] << " ";
   }
   return 0;
}