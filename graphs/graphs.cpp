#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;

void dfs(int vertex)
{

    // take action on vertex after entering the vertex

    for (int child : adj[vertex]) // this loop cant move forwared till we can cover the depth of the child
    {
        dfs(child);
    }
}

int main()
{
    return 0;
}
