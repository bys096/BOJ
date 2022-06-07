#include <iostream>

using namespace std;

int t, n, m, k, x, y;
int graph[51][51];

bool bfs(int a, int b)
{
    if(a < 0 || a > 51 || b < 0 || b > 51)
        return false;
    if(graph[a][b] == 1)
    {
        graph[a][b] = 0;
        bfs(a+1, b);
        bfs(a-1, b);
        bfs(a, b+1);
        bfs(a, b-1);

        return true;
    }
    else
        return false;
}

int main()
{
    cin >> t;
    // m: 열, n: 행
    for(int z = 0; z < t; z++)
    {
        cin >> m >> n >> k;
        for(int i = 0; i < k; i++)
        {
            cin >> y >> x;
            graph[x][y] = 1;
        }

        int cnt=0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(bfs(i, j))
                    cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}