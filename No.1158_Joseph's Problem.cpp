#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    deque<int> c;

    for(int i = 1; i <= n; i++)
        c.push_back(i);

    int cnt = 0, tmp;
    cout << "<";
    while(!c.empty())
    {
        cnt++;                                  // 맨 앞 수를 맨 뒤로 몇 번 보낸 것인지 카운트
        if(cnt == target)                       // 목표번째 수열만큼 앞에 있는 수열을 뒤로 보냈다면
        {
            if(c.size() == 1) cout << c.front() << ">";
            else cout << c.front() << ", ";     // 출력
            c.pop_front();                      // pop
            cnt = 0;
            continue;
        }
        tmp = c.front();                        // 맨 앞에 있는 수를 맨 뒤로 보냄
        c.pop_front();
        c.push_back(tmp);

    }


    return 0;
}