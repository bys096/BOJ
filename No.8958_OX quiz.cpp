#include <iostream>
#include <vector>

using namespace std;

string str;
int n;
int score, cnt;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> str;
        score = 0;
        cnt = 0;
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == 'O')     // O를 찾을때마다 cnt가 1씩 누적증가
            {
                cnt += 1;
                score += cnt;           // 누적된 cnt를 점수에 더함
                if(str[j+1] == 'X')     // 다음 문자가 X라면 cnt의 누적 초기화
                    cnt = 0;
            }
        }
        cout << score << endl;
    }

    return 0;
}