#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int n, target;      // 카드 수와, 목표 숫자
    int maxNum = 0;
    int sum;
    int b;
    vector<int> v;
    scanf("%d", &n);
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        scanf("%d", &b);
        if(b <= target)                 // 목표의 숫자 보다 크면 벡터에 추가하지 않음
            v.push_back(b);
    }
    n = v.size();                       // 크기 재조정
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n ; k++) {
                sum = v[i] + v[j] + v[k];
                if(sum <= target && sum > maxNum)
                    maxNum = sum;
            }
        }
    }
    printf("%d", maxNum);

    return 0;
}