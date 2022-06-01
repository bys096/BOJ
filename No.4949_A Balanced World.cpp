#include <iostream>
#include <deque>

using namespace std;

deque<char> d;
string tmp, buffer;
string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(getline(cin, tmp)) {
        if(tmp == ".")
        {
            s = buffer;
            break;
        }
        buffer += tmp;
    }
    if(s.size() > 0) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[')
                d.push_back(s[i]);
            else if ((s[i] == ')' || s[i] == ']')
            && d.size() > 0) {
                if (d.back() == '(' && s[i] == ')'
                    || d.back() == '[' && s[i] == ']') {
                    d.pop_back();
                }
                else
                    d.push_back(s[i]);
            }
            else if ((s[i] == ')' || s[i] == ']')
                     && d.size() == 0)
            {
                d.push_back(s[i]);
            }

            else if (s[i] == '.') {
                if (d.empty())
                {
                    if(i == s.size()-1)
                        cout << "yes";
                    else cout << "yes" << endl;
                }
                else {

                    if(i == s.size()-1)
                        cout << "no";
                    else cout << "no" << endl;
                }
                d.clear();
            }
        }
    }
    else cout << "no" << endl;

    return 0;
}