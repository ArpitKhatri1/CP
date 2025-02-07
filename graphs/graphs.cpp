#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;

void dfs(int vertex)
{
    // take action on vertex after entering the vertex

    for (int child : adj[vertex]) // this loop cant move forwared till we can cover the depth of the child
    {
        // take action on child before entering the child node
        dfs(child);
        // take action on child after exiting the child node
        // after returning after complete dfs of its tree
    }
    // take action on vertex after exiting the vertex
}

int main()
{
    return 0;
}
