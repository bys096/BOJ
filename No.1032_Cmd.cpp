#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);

    for(int i = 0; i < n; i++)
        cin >> s[i];

    bool q=false;

    for(int i = 0; i < s[0].size(); i++)
    {
        char c = s[0][i];
        for(int j = 0; j < s.size(); j++)
            if(c != s[j][i]) q = true;
        if(q) cout << '?';
        else cout << c;
        q=false;
    }
    return 0;
}