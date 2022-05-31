#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, b;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> b;
        v.push_back(b);
    }

    cout << *min_element(v.begin(), v.end()) << ' '
    << *max_element(v.begin(), v.end());

    return 0;
}