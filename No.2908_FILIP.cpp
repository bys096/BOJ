#include <iostream>
#include <vector>

using namespace std;

string reverse(string s) {
    string result;
    while(!s.empty()) {
        result.push_back(s.back());
        s.pop_back();
    }
    return result;
}

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;

    s1 = reverse(s1);
    s2 = reverse(s2);
    string max = (s1 > s2) ? s1 : s2;
    cout << max;
    

    return 0;
}