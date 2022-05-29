#include <iostream>
#include <queue>
#include <string>

using namespace std;

int n, tmp;
string cmd;
queue<int> q;

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> cmd;
        if(cmd == "pop")
        {
            if(q.empty()) cout << -1 << "\n";
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(cmd ==  "empty")
        {
            cout << q.empty() << "\n";
        }
        else if(cmd == "size")
        {
            cout << q.size() << "\n";
        }
        else if(cmd == "front")
        {
            if(q.empty()) cout << -1 << "\n";
            else cout << q.front() << "\n";
        }
        else if(cmd == "back")
        {
            if(q.empty()) cout << -1 << "\n";
            else cout << q.back() << "\n";
        }
        if(cmd == "push")
        {
            cin >> tmp;
            q.push(tmp);
        }

    }


    return 0;
}