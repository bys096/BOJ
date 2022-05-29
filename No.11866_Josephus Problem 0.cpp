#include <iostream>
#include <queue>
#include <string>

using namespace std;

int n, k;
queue<int> q;
int tmp;
string s = "<";

int main()
{
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
        q.push(i);

    while(!q.empty())
    {
        for(int i = 0; i < k; i++)
        {
            tmp = q.front();
            if(i == k-1)
            {
                q.pop();
                s += to_string(tmp) + ", ";
            }
            else
            {
                q.push(tmp);
                q.pop();
            }
        }
    }
    s.pop_back();
    s.pop_back();
    s.push_back('>');
    cout << s;
    return 0;
}

