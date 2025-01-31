#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>

using namespace std;
const int MAX = 1000;
int adj[MAX][MAX];
bool Visited[MAX];

void BFS(int V, int E, int root)
{
    vector<int> vec;
    queue<int> q;

    q.push(root);
    Visited[root] = true;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();

        vec.push_back(s);

        for (int i = 0; i < V; ++i)
        {
            if (adj[s][i] == 1 && Visited[i] == 0)
            {
                q.push(i);
                Visited[i] = true;
            }
        }
    }

    cout << "Find the maximum Vertex's :::";
    int k = *max_element(vec.begin(), vec.end());
    cout << k << "\n";
}

int main()
{

    int V, E;
    cout << "Enter the number Vertex's :::";
    cin >> V;

    cout << "Enter the number Edge's :::";
    cin >> E;

    cout << "Enter the Vertex's ::: " << "\n";

    for (int i = 0; i < V; ++i)
    {
        for (int j = 0; j < V; ++j)
        {
            adj[i][j] = 0;
        }
    }

    for (int i = 0; i < E; ++i)
    {
        int node1, node2;
        cin >> node1 >> node2;

        adj[node1][node2] = 1;
        adj[node2][node1] = 1;
    }

    int root;
    cout << "Enter the root node ::" << "\n";
    cin >> root;
    BFS(V, E, root);

    return 0;
}