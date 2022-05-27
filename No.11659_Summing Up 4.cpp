#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int size, t;
    scanf("%d", &size);
    scanf("%d", &t);
    int sum = 0;
    int tmp, l, r;
    vector<int> v(size+1, 0);

    for(int i = 1; i < v.size(); i++) {     // 누적합으로 배열 생성
        scanf("%d", &tmp);
        sum += tmp;
        v[i] = sum;
    }

    for(int i = 0; i < t; i++) {
        scanf("%d", &l);                    // 공백기준 왼쪽 수
        scanf("%d", &r);                    // 공백기준 오른쪽 수
        printf("%d\n", v[r] - v[l-1]);      // r 위치의 누적합 - l-1위치 까지의 누적합 = 원하는 범위의 누적합
    }

    return 0;
}