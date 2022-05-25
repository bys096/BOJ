#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    string tmp, str;
    cin >> n;
    cin >> str;

    for(int i = 0; i < n; i++) {
        tmp = str[i];
        sum += stoi(tmp);
    }
    cout << sum << endl;

    return 0;
}