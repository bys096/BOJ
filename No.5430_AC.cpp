#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n;
    string s, c, buffer;
    deque<int> d;
    bool rev = false, err = false;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> c;
        cin >> n;
        cin >> s;
        rev = false; d.clear(); err = false; buffer="";
        for(int j = 0; j < s.size(); j++)
        {
            if(isdigit(s[j]))
                buffer += s[j];
            else
            {
                if(!buffer.empty())
                    d.push_back(stoi(buffer));
                buffer = "";
            }
        }


        for(int j = 0; j < c.size(); j++)
        {
            if(c[j] == 'R')
            {
                if(rev)     rev = false;
                else        rev = true;
            }
            else if(c[j] == 'D')
            {
                if(d.empty())
                {
                    cout << "error\n";
                    err = true;
                    break;
                }
                if(rev) {
                    d.pop_back();
                }
                else
                    d.pop_front();
            }
        }

        if(err) continue;

        if(!rev) {
            cout << "[";
            while (!d.empty()) {
                cout << d.front();
                d.pop_front();
                if (!d.empty())
                    cout << ",";
            }
            cout << "]\n";
        }
        else
        {
            cout << "[";
            while (!d.empty()) {
                cout << d.back();
                d.pop_back();
                if (!d.empty())
                    cout << ",";
            }
            cout << "]\n";
        }
    }


    return 0;
}