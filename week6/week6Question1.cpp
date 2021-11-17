#include <bits/stdc++.h>
using namespace std;
class Graph {
    int V;
    int** g;
 
public:
    Graph(int V);
    void addEdge(int v, int w);
    bool isReachable(int s, int d);
    void computePaths();
};
 
Graph::Graph(int V)
{
    this->V = V;
    g = new int*[V + 1];
    for (int i = 1; i < V + 1; i++) {
        g[i] = new int[V + 1];
        memset(g[i], 0, (V + 1) * sizeof(int));
    }
    for (int i = 1; i <= V; i++)
        g[i][i] = 1;
}
void Graph::addEdge(int v, int w)
{
    g[v][w] = 1;
    g[w][v] = 1;
}
void Graph::computePaths()
{
    for (int k = 1; k <= V; k++) {
        for (int i = 1; i <= V; i++) {
            for (int j = 1; j <= V; j++)
                g[i][j] = g[i][j]
                          | (g[i][k]
                             && g[k][j]);
        }
    }
}
bool Graph::isReachable(int s, int d)
{
 
    if (g[s][d] == 1)
        return true;
    else
        return false;
}
int main()
{
 
    Graph _g(4);
    _g.addEdge(1, 2);
    _g.addEdge(2, 3);
    _g.addEdge(1, 4);
    _g.computePaths();
 
    int u = 4, v = 3;
    if (_g.isReachable(u, v))
        cout << "Yes\n";
    else
        cout << "No\n";
 
    return 0;
}
