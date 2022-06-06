#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int k, m, len[10001], max=0;
    long long cnt = 0;
    cin >> k >> m;
    for(int i = 0; i < k; i++)
    {
        cin >> len[i];
        if(max < len[i]) max = len[i];
    }

    // 랜선끼리의 덧셈 과정에서 int 자료형 범위를 넘을수 있기에, long형으로 써준다.
    long long start=1, end=max, pivot, res=0;
    while(start <= end)
    {
        cnt = 0;
        pivot = (start+end)/2;
        for(int j = 0; j < k; j++)
        {
            cnt += len[j] / pivot;
        }
        if(cnt < m)                         // 목표 개수보다 적다면, 선을 더 짧게 짤라야 한다.
        {
            end = pivot-1;
        }
        else    // (cnt >= m)
        {                                   // 랜선의 갯수보다 많다면, 선을 더 길게 짤라야 한다.
            start = pivot+1;                // cnt >= m 값이 같은게 여러개 있다면, 피벗을 위쪽으로 증가시킨다.
            if(res < pivot) res=pivot;
        }
    }
    cout << res;
    return 0;
}