#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    cin >> n;

    for(int i = n.size()-1; i > 0; i--)
    {
        if(n[i] > '4')                  // i번째 자리가 5 이상이라면
        {
            n[i] = '0';                 // 그 자리를 0으로 바꾸고
            if((int)n[i-1]-'0'+1 == 10 && i == 1)
            {                           // 그 왼쪽 자리가 1을 더했을때 10이상이 되고, 제일 앞자리라면 1을 앞에 추가
                n[i-1] = '0';
                n.insert(0, "1");
            }
            else                        // 아니라면, 반올림만 수행
                n[i-1]++;
        }
        else
            n[i] = '0';
    }
    cout << n;

    return 0;
}