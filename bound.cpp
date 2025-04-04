#include <iostream>
#include <vector>
using namespace std;

int n, m, result = 0;
vector<vector<int>> tree;
vector<int> cats;
vector<bool> visited;

void dfs(int node, int consecutive_cats)
{
    if (cats[node])
        consecutive_cats++;
    else
        consecutive_cats = 0;
    
    if (consecutive_cats > m) 
        return;
    
    visited[node] = true;
    bool isLeaf = true;
    
    for (int child : tree[node])
    {
        if (!visited[child])
        {
            isLeaf = false;
            dfs(child, consecutive_cats);
        }
    }
    
    if (isLeaf && node != 0) 
        result++;
}

int main()
{
    cin >> n >> m;
    tree.resize(n);
    cats.resize(n);
    visited.resize(n, false);
    
    for (int i = 0; i < n; i++)
        cin >> cats[i];
    
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--, v--; 
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    
    dfs(0, 0); 
    
    cout << result << endl;
    return 0;
}