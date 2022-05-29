#include <iostream>


using namespace std;
int main()
{
int n, m;
char a[50][50]={};
int row[50]={};
int col[50]={};

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 'X')
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    int c1=0, c2=0;
    for(int i = 0; i < n; i++) c1 += (!row[i]);
    for(int i = 0; i < m; i++) c2 += (!col[i]);
    cout << max(c1, c2);
    return 0;
}