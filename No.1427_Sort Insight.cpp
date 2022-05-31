#include <iostream>
#include <algorithm>

using namespace std;

bool compareTo(int a, int b)
{
    return a > b;
}

string s;

int main()
{
    cin >> s;
    sort(s.begin(), s.end(), compareTo);
    cout << s;
    return 0;
}