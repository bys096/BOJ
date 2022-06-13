#include <iostream>
#include <vector>

using namespace std;

int r, c;
vector<vector<int>> graph;

bool bfs(int x, int y)
{
    if(x >= r || y >= c || x < 0 || y < 0)
        return false;

    if(graph[x][y] == 1)        // 해당 좌표가 섬(1)이라면
    {
        graph[x][y] = 0;        // 해당 좌표를 바다(0)으로 바꾸고
        bfs(x+1, y);         // 주변 좌표 탐색
        bfs(x-1, y);
        bfs(x, y+1);
        bfs(x, y-1);
        bfs(x-1, y+1);    // 대각선 탐색
        bfs(x+1, y+1);
        bfs(x-1, y-1);
        bfs(x+1, y-1);
        return true;
    }
    return false;
}

int main()
{
    int cnt;
    while(true)
    {
        cnt=0;
        cin >> c >> r;
        if(c == 0 && r == 0) break;
        graph.assign(r, vector<int>(c));
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
                cin >> graph[i][j];
        }

        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
                if(bfs(i, j))
                    cnt++;
        }
        cout << cnt << endl;
        graph.clear();
    }

    return 0;
}