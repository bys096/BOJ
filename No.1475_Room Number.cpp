#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int numList[10] = {};               // 각 숫자 번호들의 등장횟수

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '9')                 // 9의 번호를 전부 6으로 셈
            numList[6]++;
        else
            numList[s[i] - '0']++;
    }
                                                            // 6과 9는 서로 바꿀 수 있으므로, 횟수가 절반으로 줄음.
    numList[6] = (numList[6] / 2) + (numList[6] % 2);       // 이 절반의 횟수와 절반으로 줄이고도 남는 횟수를 더한 것이 6과 9의 세트가 사용된 횟수가 됨.
    int maxCnt = *max_element(numList, numList+10);     // 가장 많이 등장한 횟수를 기준으로 세트를 뽑게 된다
    cout << maxCnt;

    return 0;
}