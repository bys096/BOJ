#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int nowtime = 0, n, b1, b2;
int cnt = 0;
vector<pair<int, int>> v;

bool compareTo(pair<int, int> a, pair<int, int> b)
{                                   // 종료시간을 기준으로 정렬하되, 종료시간이 같다면 시작 시간이 빠른 것을 먼저 오름차순 정렬.
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b1 >>  b2;
        v.push_back(pair<int, int>(b1, b2));
    }

    sort(v.begin(), v.end(), compareTo);

    for(int i = 0; i < n; i++)
    {
        if (v[i].first >= nowtime)                  // 종료시간이 빠른 순으로 정렬된 수 중에서,
        {                                           // 현재시간에서 실행 가능한 회의를 고름
            nowtime = v[i].second;                  // 그리고 현재시간을 회의 종료 시간으로 이동 후, 회의 수에 추가
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}