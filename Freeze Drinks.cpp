#include <iostream>
using namespace std;
int board[1001][1001]={};
int n, m;

bool dfs(int x, int y)
{
    if(x <= -1 || x >= n || y <= -1 || y >= m)
        return false;                           // 범위에서 벗어나면 false
    if(board[x][y] == 0)                        // 처음 방문한 노드면 주변 노드를 탐색하여 방문상태로 만들고 true 반환
    {
        board[x][y] = 1;
        dfs(x, y-1);
        dfs(x, y+1);
        dfs(x+1, y);
        dfs(x-1, y);
        return true;
    }
    return false;
}


int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            scanf("%1d", &board[i][j]);             // 숫자 1개당 1개의 요소를 입력받아 2차원 배열 생성
    }

    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(dfs(i, j))                      // 방문한 노드가 0일 때 cnt++(처음 방문)
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}