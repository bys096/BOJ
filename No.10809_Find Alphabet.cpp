#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;

    for(int i = 97; i < 97 + 26; i++){
        for(int j = 0; j < str.size(); j++) {
            if (((char) i) == str[j]) {
                cout << j << ' ';
                break;
            }
            else if(j == str.size() - 1) cout << -1 << ' ';
        }
    }

    return 0;
}