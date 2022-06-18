#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n), table;        // v : 입력 수열, table : 누적합 테이블

    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        table.push_back(sum);
    }

    int tmp, start = k, max=table[k-1];         // 초기값은 짜집는 수로 설정
    for(int i = start; i < table.size(); i++)
    {
         tmp = table[i]-table[i-k];             // 현재 위치의 누적값 - k만큼 떨어진 누적값 = k만큼 묶여진 현재 누적값
         if(tmp > max) max = tmp;
    }
    cout << max;

    return 0;
}