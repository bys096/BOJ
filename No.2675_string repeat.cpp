#include <iostream>

using namespace std;

string sumString(string s, int r)
{
    string sum, tmp;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < r; j++){
            sum += s[i];
        }
    }
    return sum + "\n";
}

int main()
{
    vector<pair<int, string>> v;
    int t, r;
    string s;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> r;
        cin >> s;
        cout << sumString(s, r);
    }

    return 0;
}