#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> data;
    int n, m, tmp, end, sum = 0, cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        data.push_back(tmp);
    }
    scanf("%d", &m);

    sort(data.begin(), data.end());

    for(int start = 0; start < n-1; start++)
    {
        sum = data[start];                      // 시작 포인터를 정하고, 그 시작포인터와 합을 구해 목표값이 나오면 cnt++
        end = start+1;                          // 나오지 않으면 end++
        while(end < n)                          // 다만, end를 다음 위치로 옮길때 전 위치에서 비교했던 end 값은 부분합에서 제외시킨다.
        {
            sum += data[end];
            if(sum == m)
                cnt++;
            if(sum > m)
                break;
            sum -= data[end];
            end++;
        }
    }
    printf("%d", cnt);
    return 0;
}