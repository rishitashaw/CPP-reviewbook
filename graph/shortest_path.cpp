#include <bits/stdc++.h>

using namespace std;

class Graph
{
    int V;
    // pointer to an array of list
    // dynamic allocation
    list<int> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }

    void addEdge(int i, int j, bool undir = true)
    {
        l[i].push_back(j);
        if (undir)
        {
            l[j].push_back(i);
        }
    }

    void bfs(int source, int dest = -1)
    {
        queue<int> q;
        bool *visited = new bool[V]{0};
        int *dist = new int[V]{0};
        int *parent = new int[V];

        for (int i = 0; i < V; i++)
        {
            parent[i] = -1;
        }

        q.push(source);
        visited[source] = true;
        parent[source] = source;
        dist[source] = 0;

        while (!q.empty())
        {
            int f = q.front();
            cout << f << endl;
            q.pop();

            for (auto nbr : l[f])
            {
                if (!visited[nbr])
                {
                    q.push(nbr);
                    parent[nbr] = f;
                    dist[nbr] = dist[f] + 1;
                    visited[nbr] = true;
                }
            }
        }

        for (int i = 0; i < V; i++)
        {
            cout << "Shortest distance to " << i << " is " << dist[i] << endl;
        }

        if (dest != -1)
        {
            int temp = dest;
            while (dest != source)
            {
                cout << temp << "--";
                temp = parent[temp];
            }
            cout << source << endl;
        }
    }
};

int main()
{
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(4, 5);
    g.addEdge(0, 4);
    g.addEdge(3, 4);

    g.bfs(1, 6);
}