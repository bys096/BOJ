#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int n, m;
vector<vector<int>> graph;
vector<bool> visited;
deque<int> d;


void dfs(int x)
{
    visited[x] = true;
    cout << x << ' ';
    for(int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        if(!visited[y])
            dfs(y);
    }
    return;
}

void bfs(int x)
{
    d.push_back(x);
    while(!d.empty())
    {
        int tmp = d.front();
        cout << tmp << ' ';
        visited[tmp] = true;
        d.pop_front();
        for(int i = 0; i < graph[tmp].size(); i++)
        {
            int y = graph[tmp][i];
            if(!visited[y])
            {
                visited[y] = true;
                d.push_back(y);
            }
        }
    }
}

int main()
{
    int start, a, b;
    cin >> n >> m >> start;
    graph.assign(n+1, vector<int>(0));
    visited.assign(n+1, false);

    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i = 0; i <= n; i++)
        sort(graph[i].begin(), graph[i].end());



    dfs(start);
    fill(visited.begin(), visited.end(), false);
    cout << "\n";
    bfs(start);
    return 0;
}