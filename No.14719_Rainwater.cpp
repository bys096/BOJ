#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int h, w, cnt = 0;
    cin >> h >> w;
    vector<int> v(w);
    for(int i = 0; i < w; i++)
        cin >> v[i];

    int leftTop = 0, rightTop = 0;
    for(int i = 0; i < w; i++)
    {
        if(i > 0 && i < w-1)
        {
            rightTop=0;
            for(int j = 0; j < i; j++)      // 현재 좌표를 기준으로 왼쪽의 가장 큰 블록을 찾음
            {
                if(leftTop < v[j])
                    leftTop = v[j];
            }
            for(int j = i+1; j < w; j++)    // 현재 좌표를 기준으로 오른쪽의 가장 큰 블록을 찾음
            {
                if(rightTop < v[j])
                    rightTop = v[j];
            }
            int target = min(leftTop, rightTop);    // 왼쪽과 오른쪽 중 보다 작은 블록을 기준으로 빗물을 채움
            if(v[i] < target)
                cnt += target - v[i];
        }
    }

    cout << cnt;

    return 0;
}