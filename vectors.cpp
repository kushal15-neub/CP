#include <bits/stdc++.h>
using namespace std;

// void printvector(vector<int> &v)
// {
//     cout << "size ::" << v.size() << endl;

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " "; /////// O(1) complexity
//     }
//     v.push_back(2);
//     cout << endl;
// }

/// for vectors pair
// void printvector(vector<pair<int, int>> v)
// {
//     cout << "size ::" << v.size() << endl;

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i].first << " " << v[i].second << endl; /////// O(1) complexity
//     }

//     cout << endl;
// }

/// vectors array

void printvector(vector<int> &v)
{
  cout << "size ::" << v.size() << endl;

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " " << endl; /////// O(1) complexity
  }

  cout << endl;
}

int main()
{
  ////vectors value is assigned
  ////vector<pair<int, int>> v;

  // v.push_back(4); ////it is if we want to store another value after ten elements
  // printvector(v);
  // v.pop_back(); ////popped elemts from an array
  // printvector(v);

  // vector<int> &v2 = v; /////time complexity O(1)
  // v.push_back(15);
  // printvector(v);
  // printvector(v);

  // v.pop_back();
  // printvector(v);

  // int n;
  // int x, y;

  // cin >> n;

  ////in this case vectors will assign emplty .such that ,all elements in an array is 0.
  /// for example :(if n=5 then the array will be 0 0 0 0 0 )

  // for (int i = 0; i < n; i++)
  // {
  //     cin >> x;
  //     printvector(v);
  //     v.push_back(x); ///// time complexity O(1);
  // }

  // for (int i = 0; i < n; i++)
  // {
  //     cin >> x >> y;
  //     v.push_back(make_pair(x,y)); /// must remember {}is used in v.push function
  // }

  // int N;
  // cin >> N;
  // vector<int> v[N];

  // for (int i = 0; i < N; i++)
  // {
  //     int n;
  //     cin >> n;

  //     for (int j = 0; j < n; j++)
  //     {
  //         int x;
  //         cin >> x;
  //         v[i].push_back(x);
  //     }
  // }

  // for (int i = 0; i < N; i++)
  // {
  //     printvector(v[i]);
  // }

  ///// vector of vector
  vector<vector<int>> v;
  int N;

  cin >> N;

  for (int i = 0; i < N; i++)
  {
    int n;
    cin >> n;
    vector<int> temp;
    for (int j = 0; j < n; j++)
    {
      int x;
      cin >> x;
      temp.push_back(x);
    }

    v.push_back(temp); ////push back small vector to a big vector
  }

  for (int i = 0; i < v.size(); i++)
  {
    printvector(v[i]);
  }
  cout << v[0][1];

  return 0;
}
