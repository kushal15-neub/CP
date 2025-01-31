#include <bits/stdc++.h>
using namespace std;
int main()
{
    int V, E;

    cout << "Enter the number of Vertex's ::";
    cin >> V;
    cout << "Enter the number of Edges's ::";
    cin >> E;

    int adj[V][V];

    for (int i = 0; i < V; ++i)
    {
        for (int j = 0; j < V; j++)
        {
            adj[i][j] = 0;
        }
    }
    cout << "Enter the Edge's ::";
    int node1, node2;

    for (int i = 0; i < E; i++)
    {
        cin >> node1 >> node2;
        adj[node1][node2] = 1;
        adj[node2][node1] = 1;
    }
    cout << "Adjencency Matrix::"<<endl;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << adj[i][j];
        }
        cout << endl;
    }
}