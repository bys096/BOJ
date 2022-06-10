#include <stdio.h>
#include <vector>
using namespace std;

int n, m, t1, t2, cnt=0;
vector<vector<int>> graph;
vector<bool> visited;

void bfs(int x)
{
    visited[x] = true;
    for(int i = 1; i < graph[x].size(); i++)
    {
        if(!visited[graph[x][i]])
        {
            cnt++;
            bfs(graph[x][i]);
        }
    }
    return;
}


int main()
{
    scanf("%d", &n);
    scanf("%d", &m);
    graph.assign(n+1, vector<int>(1));
    visited.assign(n+1, false);
    for(int i = 1; i <= n; i++)
        graph[i][0] = i;

    for(int i = 0; i < m; i++)
    {
        scanf("%d %d", &t1, &t2);
        graph[t1].push_back(t2);
        graph[t2].push_back(t1);
    }

    bfs(1);
    printf("%d", cnt);


    return 0;
}