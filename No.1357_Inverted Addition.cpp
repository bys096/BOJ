#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int Rev(string x)
{
    reverse(x.begin(), x.end());
    int n = stoi(x);
    return n;
}

int main()
{
    string x, y;
    cin >> x >> y;
    cout << Rev(to_string(Rev(x) + Rev(y))) << endl;
    return 0;
}