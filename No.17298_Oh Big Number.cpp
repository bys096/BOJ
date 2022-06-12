#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> result(n), v(n);
    stack<int> s;
    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = n-1; i >= 0; i--)
    {
        if(!s.empty())
        {
            while(!s.empty())
            {
                if(s.top() > v[i])          // 오큰수 발견
                {
                    result[i] = s.top();    // result에 오큰수(top)을 기록
                    s.push(v[i]);        	 // stack에 현재값을 push. 다음 자리의 오큰수를 구할때 비교할 수 있도록.
                    break;
                }
                s.pop();                    // 현재 자리의 값이 stack의 top(바로 뒷자리)보다 크다면 pop(), 이전 자리들과 현재 값을 다시 비교
            }

        }
        if(s.empty())
        {
            result[i] = -1;
            s.push(v[i]);
        }

    }

    for(int x : result) cout << x << ' ';
    return 0;
}