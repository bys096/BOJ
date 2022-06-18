#include <iostream>
#include <algorithm>

using namespace std;

string map[101];
bool visit[101][101] = {false};
int row, col;
int fcnt = 0, ecnt = 0;

void fbfs(int x, int y)         // 밀집 되어 있는 아군을 찾는 bfs
{
    if(x >= row || y >= col || x < 0 || y < 0)
        return;
    if(!visit[x][y] && map[x][y] == 'W')
    {
        fcnt++;                 // bfs에서 찾을 때마다 아군의 수 증가
        visit[x][y] = true;
        fbfs(x+1, y);
        fbfs(x-1, y);
        fbfs(x, y+1);
        fbfs(x, y-1);
        return;
    }
}

void ebfs(int x, int y)         // 밀집되어 있는 적군을 찾는 bfs
{
    if(x >= row || y >= col || x < 0 || y < 0)
        return;
    if(!visit[x][y] && map[x][y] == 'B')
    {
        ecnt++;                 // bfs에서 찾을 때마다 적군의 수 증가
        visit[x][y] = true;
        ebfs(x+1, y);
        ebfs(x-1, y);
        ebfs(x, y+1);
        ebfs(x, y-1);
        return;
    }
}

int main()
{
    int fp=0, ep=0;
    cin >> col >> row;
    for(int i = 0; i < row; i++)
        cin >> map[i];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(!visit[i][j] && map[i][j] == 'W')
            {
                fbfs(i, j);
                fp += fcnt * fcnt;      // 아군전력 = 아군 수 N^2
                fcnt=0;                 // 밀집되어 있는 아군 수 초기화
            }
            else if(!visit[i][j] && map[i][j] == 'B')
            {
                ebfs(i, j);
                ep += ecnt * ecnt;      // 적군전력 = 적군 수 N^2
                ecnt = 0;               // 밀집되어 있는 적군 수 초기화
            }
        }
    }
    cout << fp << ' ' << ep;
    return 0;
}