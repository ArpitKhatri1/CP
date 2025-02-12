#include <bits/stdc++.h>
using namespace std;

class DisjointSet
{
    vector<int> rank, parent;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int findParent(int node)
    {
        if (node == parent[node])
        {
            return node;
        }
        return parent[node] = findParent(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int up = findParent(u);
        int vp = findParent(v);
        if (up == vp)
        {
            return;
        }
        if (rank[up] < rank[vp])
        {
            parent[up] = vp;
        }
        else if (rank[vp] < rank[up])
        {
            parent[vp] = up;
        }
        else
        {
            parent[up] = vp;
            rank[up]++;
        }
    }
};

int main()
{
    DisjointSet ds(7);
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);

    if (ds.findParent(3) == ds.findParent(4))
    {
        cout << "Same";
    }
    else
    {
        cout << "not same";
    }
    ds.unionByRank(3, 7);

    if (ds.findParent(3) == ds.findParent(4))
    {
        cout << "Same";
    }
    else
    {
        cout << "not same";
    }

    return 0;
}
