#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool hanCheck(int n)
{
    bool isHan = true;
    int gap;                        // 수의 자리수 간의 등차수열 간격
    vector<int> v;
    while(n > 0) {                  // 벡터에 숫자를 자리수별로 푸쉬
        v.push_back(n % 10);
        n /= 10;
    }
    reverse(v.begin(), v.end());
    gap = v[0]-v[1];

    for(int i = 0; i < v.size()-1; i++)
        if (v[i] - v[i + 1] != gap) isHan = false;   // 등차 간의 간격이 일정하지 못할경우 한수가 아님

    return isHan;
}

int main()
{
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)                // 1부터 n까지 순회하면서 한수의 개수를 센다
        if(hanCheck(i)) cnt++;

    cout << cnt;

    return 0;
}