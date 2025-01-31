#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>

using namespace std;
const int MAX = 1000;
int adj[MAX][MAX];
bool Visited[MAX];

int BFS_level(int V, int E, int x)
{
    queue<int> q;
    q.push(x);
    Visited[x] = true;

    int level = 0;
    int current_level = 1;
    int node_connection = 0;

    while (!q.empty())
    {
        int s = q.front();
        q.pop();

        current_level--;
        for (int i = 0; i < V; ++i)
        {
            if (adj[s][i] == 1 && Visited[i] == 0)
            {
                q.push(i);
                Visited[i] = true;
                node_connection++;
            }
        }
        if (current_level == 0)
        {
            current_level = node_connection;
            node_connection = 0;
            level++;
        }
    }
    return level - 1;
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

    int x;
    cout << "Enter the  node ::" << "\n";
    cin >> x;

    int d = BFS_level(V, E, x);
    cout << "Maximum Level of the BFS is :::" << d << "\n";

    return 0;
}