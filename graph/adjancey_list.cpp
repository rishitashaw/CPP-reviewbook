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

    void printAdjacencyList()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " --> ";
            for (auto node : l[i])
            {
                cout << node << ",";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(4, 5);

    g.printAdjacencyList();
}