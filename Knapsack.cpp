#include <bits/stdc++.h>
using namespace std;

struct items
{
  double price, weight, unitprice;
};

double knapsack(items item[], int n, double cap)
{
  double profit = 0.00;
  bool swapped;

  for (int i = 0; i < n - 1; ++i)
  {
    swapped = false;
    for (int j = 0; j < n - i - 1; ++j)
    {
      if (item[j].unitprice < item[j + 1].unitprice)
      {
        swap(item[j], item[j + 1]);
        swapped = true;
      }
    }

    if (swapped == false)
    {
      break;
    }
  }

  for (int i = 0; i < n; ++i)
  {
    if (item[i].weight <= cap)
    {
      profit += item[i].price;
      cap -= item[i].weight;
    }
    else
    {
      profit += (cap * item[i].unitprice);
      cap = 0;
      break;
    }
  }
  return profit;
}

int main()
{
  int n, capacity;

  cout << "Enter the number of elements ::";
  cin >> n;

  items item[n];

  cout << "Enter weight and Profit::";

  for (int i = 0; i < n; ++i)
  {
    cin >> item[i].weight >> item[i].price;
    item[i].unitprice = item[i].price / item[i].weight;
  }

  cout << "Enter capacity::";
  cin >> capacity;
  cout << "Maximum Profit  ::" << knapsack(item, n, capacity);
}
