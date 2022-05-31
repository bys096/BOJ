#include <iostream>

using namespace std;
int arr[15][15];
int t;
int sum = 0;

int main()
{
    cin >> t;
    for(int i = 0; i < 15; i++)                 // 아파트의 전체 필요 인원수를 구함
    {
        for(int j = 1; j < 15; j++)
        {
            sum = 0;
            if(i == 0)
                arr[i][j] = j;
            else
            {
                for(int k = 0; k <= j; k++)
                    sum += arr[i-1][k];
                arr[i][j] = sum;
            }
        }
    }

    int x, y;
    for(int i = 0; i < t; i++)                // 해당하는 방의 인원수를 가져옴
    {
        cin >> x;
        cin >> y;
        cout << arr[x][y] << endl;
    }

    return 0;
}